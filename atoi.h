#ifndef ATOI
#define ATOI
/*include guards have been used to avoid the redeclaration of the header files*/
#include<string.h>
#include<iostream>
using namespace std;

char *Reverse(char []);

char *Reverse(char s[])
{
    /*this function reverses the string and returned the reversed string*/
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
    /*This function convert integer to character array (according to definition it should have been )  */
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


#endif
