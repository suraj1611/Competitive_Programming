#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int minm(int n,int a[])
{
    int i,j,min,k,diff=0;min=abs(a[0]-a[1]);
    for(i=0;i<(n-1);i++)
    {
       for(j=i+1;j<n;j++)
       {
           for(k=1;k<=((n*(n-1))/2);k++)
           {
            diff=abs(a[i]-a[j]);
            if(diff<min)
            min=diff;
           }
       }
    }
    return min;
}
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<minm(n,a)<<endl;
    }
return 0;
}
