#pragma once
#include "Workout.h"

class Booking
{
private:
    /* data */
public:
    int booking_id;
    int slot_id;
    int center_id;
    string date;
    Booking(/* args */)
    {
        //do nothing
    }
    Booking(int slot_id,int center_id,string date)
    {
        this->booking_id=GetUniqueId(2);
        this->center_id=center_id;
        this->slot_id=slot_id;
        this->date=date;
    }
     int GetBookingId();
     int GetSlotId();
     int GetCenterId();
     string GetDate();
};


