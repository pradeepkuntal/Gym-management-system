#include "..\Header\Booking.h"

int Booking::GetBookingId()
{
    return booking_id;
}
int Booking::GetCenterId()
{
    return center_id;
}
int Booking::GetSlotId()
{
    return slot_id;
}
string Booking::GetDate()
{
    return date;
}