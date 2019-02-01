#ifndef DELETE
#define DELETE
#include<fstream>
//#include<stdio.h>
#include"see_all.h"
#include"atoi.h"
#include <cstdio>

#include<iostream>
//#include<stdlib.h>
int del;
extern int no_of_files;       // x in main() function........
extern int nomen;
update_no_of_files_when_file_deleted()
    {
                no_of_files--;
                ofstream savior;
                savior.open("numbers_of_files.txt");
                savior<<no_of_files;
				savior.close();
    }
/*char* del_file_name(int g)
{

    char rem[10]="rem";
    char ch[5];
    //update_count();
    strcat(rem,atoi(g,ch));
    cout<<rem<<endl;
    char txt[]=".txt";
    strcat(rem,txt);
    cout<<rem<<endl;
    return rem;

}
UNABLE TO GET PASS THE STRING AND LET THE CALLED FUNCTION CARRYOUT DELETION


*/


what_to_delete()
{
    char ch;
    cout<<"Enter the reminder name you want to delete";
    cout<<"If you forgot the reminder name press y to see all reminder:\t";
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        cout<<"You choose to see all files\n\n";
        see_list(nomen);
        cout<<"\n\nNow write the name of reminder u want to delete";
    }
else{cout<<"\n\nOkay good which rem u want to please write its number: ";}
    cin>>del;
    //char *txt;
    //txt=del_file_name(del);
    char rem[10]="rem";
    char Count[5];
    //update_count();
    strcat(rem,atoi(del,Count));
    //cout<<rem<<endl;
    char txt[]=".txt";
    strcat(rem,txt);
    //cout<<rem<<endl;

    //cout<<*txt;
    if(remove(rem)==0)
    {
        cout<<"Remove successful \n";
		update_no_of_files_when_file_deleted();

	}
    else
        cout<<"Try again";


}


#endif
