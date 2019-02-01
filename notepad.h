#include<stdlib.h>
#include<windows.h>
#include<string.h>
edit(int x)
{
    char file[]=create_name(x);
    ifstream ptr;
    ptr.open(file,ios::in);
        if(ptr==NULL)
            {cout<<"Reminder don't exist write  correct number ";
            ptr.close();
                return 0;
                }
    char dir[]="C:\\Windows\\system32\\notepad.exe ";
    strcat(dir,file);
    ptr.close();
    system(dir);
return 0;
}

