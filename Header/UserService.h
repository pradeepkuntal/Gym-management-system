#pragma once
#include "Booking.h"
#include "User.h"
#include "WorkoutService.h"
#include "SlotService.h"


class UserService
{
private:
    /* data */
public:
    map<string,User>UserDB;
   // vector<Booking>bookings;
    map<string,vector<Booking>>bookings;  ////Booking corresponiding to user
    WorkoutService workoutservice;
    SlotService slotservice;
    UserService(/* args */)
    {
        //Do nothing
    }
    UserService(WorkoutService workoutservice,SlotService slotservice)
    {
        this->workoutservice=workoutservice;
        this->slotservice=slotservice;
    }
    User RegisterUser(string name,string mobile_num,string email_id);
    int BookASlot(string user_name,int center_id,int slot_id,string date);
    vector<Booking> GetBookingForDate(string date,string user_name); 
    bool CheckAvailbity(string user_name,int slot_id);
};
