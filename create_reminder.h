#ifndef CREATE_REMINDER
#define CREATE_REMINDER
/*

FIX THE BUG OF REENTERING THE CHOICE
EVEN THOUGH WE OPTED NOT TO MAKE FURTHER REMINDER
WHILE LOOP NOT TERMINATING WHEN WE OPTED FOR N or n

*/
#include<stdio.h>
#include<fstream>
#include<iostream>
//#include<stdlib
#include"atoi.h"
using namespace std;
extern int no_of_files;
extern int nomen;
void file_name(int);
void make_file(char *,int);

const int capacity=200;
int create_remainder(int num)
    {
        cout<<"to continue press Y\n\t\tYour choice  :";
        char choice;
        choice=cin.get();
        while(choice=='y'||choice=='Y')
        {
                    //ALREADY INCREMENTED
            file_name(num);

            cout<<"CONGRATS YOU HAVE SUCCESSFULLY CREATED REMAINDER \n\n\nwant more reminder PRESS Y\n\t\tYour choice  :";no_of_files++;nomen++;num++;

            choice=cin.get();
        }
    return 0;
    }

void file_name(int x)
{

    char rem[]="rem";
    char ch[5];
    strcat(rem,atoi(x,ch));
    char txt[]=".txt";
    strcat(rem,txt);
    make_file(rem,x);

}
void make_file(char *s,int x)
{
    ofstream fopen;
    fopen.open(s);
    fopen<<"Reminder "<<x<<"\n\n";
    char ch[15];
    fflush(stdin);
    cout<<"please write date,month,year in the format day:month:year correspondingly:\t";
    fgets(ch,sizeof(ch),stdin);
    fopen<<ch;
    //char temp[40];
    cout<<"please write details of notes:\t";
    //fgets(temp,sizeof(temp),stdin);
    char *darray;
    darray=new char[capacity];
    fgets(darray,capacity,stdin);
    fopen<<darray;
    delete []darray;
    darray=NULL;

                                                 //TO AVOID OVERFLOW AND CRASHING OF THE PROGRAM.......
}


#endif // CREATE_REMINDER

