#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
void rate(int n,int p,int a[])
{
    int i,k=0,l=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=(p/2))
            {k++;continue;}
        else if(a[i]<=p/10)
        {
            l++;continue;
        }
    }
    if(k==1&&l==2)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}
int main()
{
    int t,n,p,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        rate(n,p,a);

    }
}
