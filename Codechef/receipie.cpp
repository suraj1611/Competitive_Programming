#include<stdio.h>
#include<iostream>
using namespace std;
int min(int n,int a[])
{
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    return min;
}
int hcf(int a[],int min,int n)
{
    int i,j,k=0;
    for(i=min;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {k=1;continue;}
            else
            {k=0;break;}
        }
        if(k==0)
            continue;
        else
            break;
    }
    return i;
}
int main()
{
    int t,n,i,minm;
    cin>>t;
    while(t--)
    {
        cin>>n;int ar[n];
        for(i=0;i<n;i++)
            cin>>ar[i];
    minm=min(n,ar);
    for(int i=0;i<n;i++)
    {cout<<(ar[i]/(hcf(ar,minm,n)))<<" ";}
    }
    cout<<endl;
return 0;
}
