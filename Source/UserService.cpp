#include "..\Header\UserService.h"


User UserService::RegisterUser(string name,string mobile_num,string email_id)
{
    User user(name,mobile_num,email_id);
    UserDB[name]=user;
    return user;
}

bool UserService::CheckAvailbity(string user_name,int slot_id)
{
    if(UserDB.find(user_name)==UserDB.end())
    {
        cout<<"User is not register yet"<<endl;
        return 0;
    }
    for(int i=0;i<bookings[user_name].size();i++) ///To check duplicate booking for same slot
    {
        Booking bk=bookings[user_name][i];
        //int slot_id=bk.GetSlotId();
        if(bk.GetSlotId()==slot_id)
        {
            cout<<"Already booked for same timing"<<endl;
            return 0;
        }
    }
    map<int,Slot>SlotDB=slotservice.GetSlotDB();
    if(SlotDB.find(slot_id)==SlotDB.end()){
        cout<<"No such Slot_id"<<endl;
        return 0;
    }
    cout<<SlotDB[slot_id].GetSlotCaapcity()<<endl;
    if(SlotDB[slot_id].GetSlotCaapcity()<=0)
    {
        cout<<" No such Slot are remaining"<<endl;
        return 0;
    }
  return 1;

}

int UserService::BookASlot(string user_name,int center_id,int slot_id,string date)
{

    if(!CheckAvailbity(user_name,slot_id))
    {
        cout<<"Slot can not be booked"<<endl;
        return -1;
    }
    Booking book(slot_id,center_id,date);
    bookings[user_name].push_back(book);
    map<string,vector<Workout>>workoutlistbydate=workoutservice.GetWorkoutDB();
    vector<Workout>workouts=workoutlistbydate[date];
    for(int i=0;i<workouts.size();i++)
    {
        if(workouts[i].GetCenter().GetId()==center_id)
        {
            vector<Slot>slots=workouts[i].GetSlots();
            for(int i=0;i<slots.size();i++)
            {
                Slot slot=slotservice.GetSlotDB()[slot_id];
                if(slots[i].GetId()==slot_id)
                {
                    Slot slot=slots[i];
                    slot.UpdateSlotCapacity(-1);
                    slotservice.UpdateSlot(slot);
                    break;
                }                
            }
            break;
        }
    }
    return book.GetBookingId();
}
vector<Booking> UserService::GetBookingForDate(string date,string user_name)
{
    vector<Booking>bookedbyuser=bookings[user_name];
    vector<Booking>bookedbyuserforgivendate;
    for(int i=0;i<bookedbyuser.size();i++)
    {
        if(bookedbyuser[i].GetDate()==date)
        {
            bookedbyuserforgivendate.push_back(bookedbyuser[i]);
        }
    }
    return bookedbyuserforgivendate;
}


