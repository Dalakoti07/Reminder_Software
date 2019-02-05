#ifndef DELETE
#define DELETE
#include<fstream>
#include"see_all.h"
#include"atoi.h"
#include <cstdio>

#include<iostream>
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
    char rem[10]="rem";
    char Count[5];
    strcat(rem,atoi(del,Count));
    char txt[]=".txt";
    strcat(rem,txt);

    if(remove(rem)==0)
    {
        cout<<"Remove successful \n";
		update_no_of_files_when_file_deleted();

	}
    else
        cout<<"Try again";


}


#endif
