#include<fstream>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
edit(int x)
{
    //char file[]=create_name(x);
    ifstream ptr;
    ptr.open(create_name(x),ios::in);
        if(ptr==NULL)
            {cout<<"Reminder don't exist write  correct number ";
            ptr.close();
                return 0;
                }
    char dir[]="C:\\Windows\\system32\\notepad.exe ";
    strcat(dir,create_name(x));
    ptr.close();
    system(dir);
return 0;
}

