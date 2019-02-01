#include<iostream>
using namespace std;
extern int nomen;

nomenclature()
    {
    ifstream no;
    no.open("nomenclature.txt",ios::in);
    if(no==NULL)
    {
        //cout<<"not available";
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

