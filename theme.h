#include<stdio.h>

#include<stdlib.h>

/*
THEME SETTING- white black(F0),white green (F2)(default),white purple(F5),black green(02),red black(40),aqua black(30)
COLOR MENU
This allows you to change the theme of the reminder app
*/

set_theme()
{
    ifstream fin;
    fin.open("theme.txt",ios::in);
    int ch;
    fin>>ch;
    switch(ch)
    {
        case 0:system("color 0F");break;
        case 1:system("color F0");break;
        case 2:system("color F2");break;
        case 3:system("color F5");break;
        case 4:system("color 02");break;
        case 5:system("color 40");break;
        case 6:system("color 30");break;
        default :system("color 0F");
    }
    fin.close();
}


change_theme()
{

cout<<"HERE ARE OPTIONS AVAILABLE :\nfirst color represent background color and second color represent foreground color (color of the text) \n\n0. Default theme\n1. white black\n2. white green\n3. white purple\n4. black green\n5. red black\n6. aqua black ";
int ch;
cin>>ch;
if(ch>=0&&ch<=6)
{
ofstream ptr;
ptr.open("theme.txt");
ptr<<ch;
ptr.close();
}

    switch(ch)
    {
        case 0:system("color 0F");break;
        case 1:system("color F0");break;
        case 2:system("color F2");break;
        case 3:system("color F5");break;
        case 4:system("color 02");break;
        case 5:system("color 40");break;
        case 6:system("color 30");break;
        default :cout<<"Uh OOOOO Try again in main menu";
    }

}
