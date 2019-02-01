#include<iostream>
using namespace std;
#include<fstream>
#include<windows.h>
extern char date[12];
today_time()
{
    fstream ptr;
    ptr.open("todays_time.txt");
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
