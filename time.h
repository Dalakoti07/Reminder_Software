#include<iostream>
using namespace std;
#include<fstream>
#include<windows.h>
today_time()
{
    ofstream ptr;
    ptr.open("todays_time.txt");
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    ptr<<stime.wDay<<":"<<stime.wMonth<<":"<<stime.wYear<<endl;
    ptr.close();
    return 0;

}
main()
{

}
