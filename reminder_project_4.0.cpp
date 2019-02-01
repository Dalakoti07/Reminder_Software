/*
    This is the main driver function ,which executes everything
    This whole project ,adopts the procedural programming

1.	WHAT IS NEW IN THIS VERSION:
2. GRAPHICS INTERFACE  TO SEE NOTES
3. delete all past notes(reminder)
4. Daily work task sheet............work on it
6. Exception Handling
5.
*/
#include <iostream>
#include <fstream>
#include<string.h>
#include<conio.h>
#include <cstdlib>
#include<stdlib.h>
#include"create_reminder.h"
#include"see_all.h"
#include"delete.h"
#include"theme.h"
#include"random_stuff.h"
#include"music.h"
#include"daily_stuff.h"
#include"edit.h"
//#include"beep.cpp"
using namespace std;
int no_of_files;  //keep record of number of files
int nomen;  //do nomenclature of reminder by adding 1 to no data in nomen integer that we get from nomenclature file and reading loop goes until this variable.....
char date[12];              // today's day

int main()
{
    music();
//    beep();
    set_theme();
    today_date();
    get_today_date();
    start();
    initial();
    nomenclature();
    void update_no_of_files();
    void update_nomen();
    system("cls");
    cout<<"Todays reminder are:\n\n";
    today_rem(nomen);
    cout<<"\n\nKEEP SMILING AND DO THE DAILY STUFF AND YOU WILL GO LONG WAY......HAVE A GOOD DAY";
    _getch();
    system("cls");
    cout<<"Welcome\n\n\n";    cout<<"Todays date is "<<date<<"\n\n\n";
    cout<<"you have "<<no_of_files<<" reminders\n\n";
    menu();
    int edit_it;
    char ch;
    cin>>ch;
    while(1)
    {

    switch(ch)
    {
        case '1':see_list(nomen);break;
        case '2':create_remainder(nomen+1);
                update_nomen();
                update_no_of_files();_getch();break;

        case '3':what_to_delete();_getch();break;
        case '4':change_theme();_getch();break;
        case '5':daily_stuff(nomen);break;
        case '6':cout<<"\nEnter the reminder number which u want to delete";cin>>edit_it;edit(edit_it);break;
        case '7':exit(0);break;
        deafult:cout<<"try next time";break;
    }
    system("cls");
    cout<<"you have "<<no_of_files<<" reminders\n\n";
    menu();
	cin>>ch;

}

    return 0;
}


