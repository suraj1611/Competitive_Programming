#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0,i;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=1;i<n;i++)
        {
            while(b[i]!=a[i])
            {
            if(((b[i]-1)==a[i])&&((b[i-1]-1)==a[i-1]))
            {k=1;}
            else
                k=0;
            }
        }
        if(k==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }}
