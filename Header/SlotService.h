#pragma once
#include "Slot.h"

class SlotService
{
private:
    /* data */
public:
    map<int,Slot>SlotDB;
    SlotService(/* args */)
    {
        //Do nothing
    }
    Slot AddSlot(string timing,WorkoutType workouttype,int slot_capacity);
    map<int,Slot> GetSlotDB();
    void UpdateSlot(Slot slot);

};


