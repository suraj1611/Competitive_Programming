#include<iostream>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,i,count=0,k;
cin>>n;
int ar[n];
rep(i,n)
    cin>>ar[i];
cin>>k;
for(i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if((ar[i]+ar[j])==k)
            count++;
    }
}
cout<<count<<endl;
}
}
