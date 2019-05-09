#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,min;
    for(i=0;i<n;i++)
            cin>>ar[i];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    cout<<min<<endl;
    for(i=min;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {k=1;continue;}
        }
    }
    cout<<"i="<<i;

}
int main()
