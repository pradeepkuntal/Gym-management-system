#include "..\Header\Slot.h"

void Slot::UpdateSlotCapacity(int x)
{
    this->slot_capacity+=x;
}
int Slot::GetSlotCaapcity()
{
    return slot_capacity;
}
string Slot::GetTiming()
{
    return timing;
}
WorkoutType Slot::GetWorkoutType()
{
    return workouttype;
}
int Slot::GetId()
{
    return id;
}