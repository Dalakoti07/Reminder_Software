#ifndef INITIALISATION
#define INITIALISATION
#include<iostream>

#include<conio.h>
#include<fstream>
int extern no_of_files;
void initial()
    {
    ifstream ptr;
    ptr.open("numbers_of_files.txt",ios::in);
    if(ptr==NULL)
    {
        //cout<<"not available";
        ofstream abc;
        abc.open("numbers_of_files.txt");
        abc<<0;
        no_of_files=0;
        abc.close();
    }
    else
        {ptr>>no_of_files;

        }
ptr.close();

    }
#endif // INITIALISATION
