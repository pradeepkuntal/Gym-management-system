#pragma once
#include "Entity.h"

class Slot
{
private:
    /* data */
public:
    int id;
    string timing;
    WorkoutType workouttype;
    int slot_capacity;
    Slot(/* args */)
    {
        cout<<"Non parametized constructor "<<endl;
    }

    Slot(string timing, WorkoutType workouttype,int slot_capacity)
    {
        this->id=GetUniqueId(1);
        this->timing=timing;
        this->workouttype=workouttype;
        this->slot_capacity=slot_capacity;
    }
    string GetTiming();
    WorkoutType GetWorkoutType();
    int GetSlotCaapcity();
    void UpdateSlotCapacity(int x);
    int GetId();
};


