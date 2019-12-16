#include<iostream>
#include<string.h>
#include<stdio.h>
#include <cstdio>
using namespace std;
int convert(char ch)
{
    int n=(int)ch;
    int ar[]={67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
    int d1,d2,i;
    if(n<=67)
        return 67;
    else if(n>=113)
        return 113;
    else
    {
        for(i=0;i<12;i++)
        {
            if(ar[i]>n)
            break;
        }
        d1=ar[i]-n;
        d2=n-ar[i-1];
        if(d1<d2)
        return ar[i];
        else
        return ar[i-1];
    }
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    string s;
    cin>>n>>s;

    for(int i=0;i<n;i++)
    {
        cout<<((char)convert(s[i]));
    }
    cout<<endl;
}
return 0;
}
