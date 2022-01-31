#include "..\Header\Helper.h"

int GetUniqueId(int val)
{
    static int UserCount=1;
    static int SlotCount=1;
    static int BookingCount=1;
    if(val==0)return UserCount++;
    else if(val==1)return SlotCount++;
    else if(val==2)return BookingCount++;
    else return 0;
}
