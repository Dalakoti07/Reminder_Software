#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include"atoi.h"
#include<iostream>
#include<fstream>
using namespace std;
INTRO()
{
    char ch[5];
    initwindow(800,600,"Reminder 4.0");
    setbkcolor(WHITE);
    cleardevice();
    settextstyle(9,HORIZ_DIR,10);
    setcolor(RED);
    outtextxy(10,10,"Reminder");
    outtextxy(10,150,"App");
    settextstyle(9,HORIZ_DIR,5);

    outtextxy(400,400,"For the people");
    outtextxy(400,450,"To the people");
    outtextxy(400,500,"By the people");

    settextstyle(4,HORIZ_DIR,10);
    settextstyle(9,HORIZ_DIR,9);
    for(int i=0,j=1;i<3,j<4;i++,j++)
        {
            outtextxy(800,600,atoi(j,ch));
            delay(1000);

        }
    cleardevice();
    settextstyle(9,HORIZ_DIR,5);
    setcolor(GREEN);
    outtextxy(100,100,"Made By:");
    outtextxy(200,150,"Saurabh Dalakoti");
    outtextxy(200,200,"Nikhil Chauhan");
    outtextxy(200,250,"Sourav Jangra");
    outtextxy(200,300,"Vivek Raghav");

    getch();
    closegraph();

}
start()
{
    ifstream ptr;
    ptr.open("numbers_of_files.txt",ios::in);
        if(ptr==NULL)
        INTRO();

}
