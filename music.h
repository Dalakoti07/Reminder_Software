#include<windows.h>
#include<mmsystem.h>
music()
{
    PlaySound(TEXT("quite-impressed.wav"),NULL,SND_SYNC);
    return 0;
}
