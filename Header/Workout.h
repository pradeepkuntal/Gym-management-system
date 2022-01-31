#pragma once
#include "Slot.h"
#include "Center.h"

class Workout
{
private:
    /* data */
public:
    Center center;
    vector<Slot>slots;
    Workout(/* args */)
    {
        //Do nothing
    }
    Workout(Center center,vector<Slot>slots)
    {
        this->center=center;
        this->slots=slots;
    }
    Center GetCenter();
    vector<Slot> GetSlots();
};



