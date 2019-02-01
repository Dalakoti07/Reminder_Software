#ifndef SEE_ALL
#define SEE_ALL


#include<iostream>
using namespace std;
#include"atoi.h"
#include<stdlib.h>
#include<string.h>
#include<string>
#include <cstdlib>

 char *create_name(int x)
{
    char rem[]="rem";
    char ch[5];
    strcat(rem,atoi(x,ch));

    char txt[]=".txt";
    strcat(rem,txt);
    return rem;
}


see_list(int y)
{
    system("cls");
    //cout<<y;

    ifstream ptr;
    char str;
    for(int i=1;i<=y;i++)
    {
        ptr.open(create_name(i),ios::in);
        if(ptr==NULL)
            ;
        else
    {

    while(ptr)
            {

                ptr.get(str);
                cout<<str;
            }
            ptr.close();
cout<<"\n\n\n";
    }



    }
//cout<<"Press any key to see menu";
_getch();
}

#endif
