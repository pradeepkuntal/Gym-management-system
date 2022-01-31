#include "..\Header\SlotService.h"

Slot SlotService::AddSlot(string timing,WorkoutType workouttype,int slot_capacity)
{
    Slot slot(timing,workouttype,slot_capacity);
    SlotDB[slot.GetId()]=slot;
    return slot;
}
map<int,Slot> SlotService::GetSlotDB()
{
    return SlotDB;
}
void SlotService::UpdateSlot(Slot slot)
{
    SlotDB[slot.GetId()]=slot;
    return;
}
