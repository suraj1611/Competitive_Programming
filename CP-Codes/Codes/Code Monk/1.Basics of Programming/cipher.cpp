#include<iostream>
#include<string.h>
#include<stdio.h>
#include <cstdio>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>s;
    cin>>n;
    for(int i=0;i<=s.length();i++)
    {
        if(isupper(s[i]))
        {
            s[i]+=4;
            if(s[i]>90)
            s[i]-=26;
        }
        else if(islower(s[i]))
        {
            s[i]+=4;
            if(s[i]>122)
            s[i]-=26;
        }
        else if(s[i]>=48&&s[i]<=57)
        {
            s[i]+=4;
            if(s[i]>57)
            s[i]-=10;
        }
    }
    cout<<s;
}
