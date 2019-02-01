#ifndef ATOI
#define ATOI

#include<string.h>
#include<iostream>
//#include<stdio.h>
using namespace std;

char *Reverse(char []);
//char *atoi(int,char []);

char *Reverse(char s[])
{
    char *p=s;
    char cha;
    for(int i=0,j=strlen(s)-1;i<j;i++,j--)
    {
        cha=s[i];
        s[i]=s[j];
        s[j]=cha;
    }
    return p;
}

char *atoi(int x,char ch[])
{
    char *p=ch;
    int i=0;
    do
    {
        ch[i]=(x%10)+'0';
        i++;
        x/=10;
    }
    while(x!=0);
    ch[i]='\0';
    return Reverse(p);
}


#endif // ATOI
