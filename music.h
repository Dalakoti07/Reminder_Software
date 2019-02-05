#include<windows.h>
#include<mmsystem.h>
/*This plays the sound ,effeciency can be improved by threading*/
music()
{
    PlaySound(TEXT("quite-impressed.wav"),NULL,SND_SYNC);
    return 0;
}
