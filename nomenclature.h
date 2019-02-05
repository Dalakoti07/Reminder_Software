#include<iostream>
using namespace std;
extern int nomen;
/*This gives the file number to the newly file created*/
nomenclature()
    {
    ifstream no;
    no.open("nomenclature.txt",ios::in);
    if(no==NULL)
    {
        ofstream abc;
        abc.open("nomenclature.txt");
        abc<<0;
        nomen=0;
        abc.close();
    }
    else
        {no>>nomen;

        }
no.close();



    }

