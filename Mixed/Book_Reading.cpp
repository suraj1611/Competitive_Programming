#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,t;
    cin>>n>>t;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=86400-a[i];
        if(sum>=t)
            {cout<<i+1;break;}
    }

    return 0;
}
