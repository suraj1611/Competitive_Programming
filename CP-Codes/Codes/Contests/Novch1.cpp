#include<iostream>
#include<stdio.h>
int main()
{
    int t,a=0,b=0;
    char ch[10000];
    while(t--)
    {
        gets(ch);
        while(ch[i]<strlen(ch))
        {
            if(ch[i]=='A')
                {
                    a++;i++;
                    if(ch[i]=='.')
                    {t++;i++;continue;}
                }

            if(ch[i]=='B')
                b++;
            if(ch[i]=='.')
                a++;
        }
    }
}
