/////
#include "..\Header\Helper.h"
#include "..\Header\Entity.h"
#include "..\Header\Center.h"
#include "..\Header\Slot.h"
#include "..\Header\Booking.h"
#include "..\Header\Workout.h"
#include "..\Header\SlotService.h"
#include "..\Header\WorkoutService.h"
#include "..\Header\User.h"
#include "..\Header\UserService.h"

//#include<bits/stdc++.h>

//using namespace std;






int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout<<"Hello world"<<endl;

    Center center1("Bangluru1");
    Center center2("Bengluru2");

    SlotService slotservice;
    Slot slot1 = slotservice.AddSlot("6AM-7AM",Weights,3);
    Slot slot2 = slotservice.AddSlot("7AM-8AM",Weights,3);
    Slot slot3 = slotservice.AddSlot("8AM-9AM",Cardio,3);
    Slot slot4 = slotservice.AddSlot("6PM-7PM",Weights,3);
    Slot slot5 = slotservice.AddSlot("7PM-8PM",Weights,3);
    Slot slot6 = slotservice.AddSlot("8PM-9PM",Cardio,3);

    vector<Slot>slots={slot1,slot2,slot3,slot4,slot5,slot6};

    WorkoutService workoutservice;
   // Workout workout1(center1,slots);
   // Workout workout2(center2,slots);
    Workout workout1=workoutservice.AddWorkout(center1,slots,"31/01/2022");
    Workout workout2=workoutservice.AddWorkout(center2,slots,"31/01/2022");


    vector<Workout>workoutingym=workoutservice.ShowWorkoutInGym();
    for(int i=0;i<workoutingym.size();i++)
    {
        cout<<workoutingym[i].GetCenter().GetName()<<endl;
        for(int j=0;j<workoutingym[i].GetSlots().size();j++)
        {
            cout<<workoutingym[i].GetSlots()[j].GetTiming()<<endl;
        }
    }

    UserService userservice(workoutservice,slotservice);
    User user1=userservice.RegisterUser("pk","7014179665","pradeepkuntal22@gmail.com");
    User user2=userservice.RegisterUser("ck","7088888888","pradeepkuntal22@gmail.com");
    User user3=userservice.RegisterUser("vk","7777777777","pradeepkuntal22@gmail.com");
    User user4=userservice.RegisterUser("rk","7777779777","pradeepkuntal22@gmail.com");
    
    cout<<slot1.GetId()<<endl;
    int booking_id=userservice.BookASlot("pk",center1.GetId(),slot1.GetId(),"31/01/2022");
    if(booking_id!=-1)cout<<"Slot is booked with "<<booking_id<<endl;

     booking_id=userservice.BookASlot("ck",center1.GetId(),slot1.GetId(),"31/01/2022");
    if(booking_id!=-1)cout<<"Slot is booked with "<<booking_id<<endl;

     booking_id=userservice.BookASlot("ck",center1.GetId(),slot1.GetId(),"31/01/2022");
    if(booking_id!=-1)cout<<"Slot is booked with "<<booking_id<<endl;

     booking_id=userservice.BookASlot("vk",center1.GetId(),slot1.GetId(),"31/01/2022");
    if(booking_id!=-1)cout<<"Slot is booked with "<<booking_id<<endl;

     booking_id=userservice.BookASlot("rk",center1.GetId(),slot1.GetId(),"31/01/2022");
    if(booking_id!=-1)cout<<"Slot is booked with "<<booking_id<<endl;

    return 0;
}