#include<iostream>
using namespace std;
#include<fstream>
#include<stdio.h>
#include<process.h>
#include<windows.h>
extern char date[12];
today_date()
{
    fstream ptr;
    ptr.open("todays_time.txt",fstream::out);
    if(ptr==NULL)
    {
        cout<<"\n\nUNEXPECTED ERROR";
        exit(0);
    }
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    ptr<<stime.wDay<<":"<<stime.wMonth<<":"<<stime.wYear<<endl;
    char compare[12];

    ptr.getline(compare,12);
    cout<<compare;
    ptr.close();
    return 0;

}
get_today_date()
{
    ifstream ptr;

    ptr.open("todays_time.txt",ios::in);

        ptr.getline(date,20);


}
