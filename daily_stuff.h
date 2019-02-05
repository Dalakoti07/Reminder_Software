#include<iostream>
using namespace std;
#include<stdio.h>
/*This header file give the facility to make a habit, by entering that habit in all the consecutive reminder made*/
daily_stuff(int y)                                 
{
    system("cls");
    fflush(stdin);
    cout<<"\n\nWrite down the things you want to do on daily basis:\n";
    char *darray;
    int capacity=200;
    darray=new char[capacity];
    fgets(darray,capacity,stdin);
    ifstream ptr;
    for(int x=0;x<=y;x++)
    {
        ptr.open(create_name(x),ios::in);
        if(ptr==NULL)
            ptr.close();
        else
        {
                ptr.close();
                ofstream read;
                read.open(create_name(x),ios_base::app);
                read<<darray;
                read.close();
        }


    }



    delete []darray;
    darray=NULL;



}
