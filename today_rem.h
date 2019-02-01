#ifndef TODAY_REM
#define TODAY_REM

#include<string.h>
#include<iostream>
using namespace std;
#include<fstream>
#include<string.h>




today_rem(int y)            // y is the name of the last nomen, call this function from main .cpp
{
    ifstream ptr;
    int count=0;
    char ch[20];
    char str;
    for(int i=1;i<=y;i++)
    {
        ptr.open(create_name(i),ios::in);
        if(ptr==NULL)
            ;
        else
    {

            for(int i=0;i<3;i++)
                {
                        ptr.getline(ch,20);
                }

            if (strcmp(date,ch)==0)
                {
                    while(ptr)
                    {
                        ptr.get(str);
                        cout<<str;
                    }
                count++;

                }
            ptr.close();

    }


    }

if(count==0)
    cout<<"You don't have any reminder for today,add them if u want to in main window, otherwise enjoy your day ";

}
#endif
