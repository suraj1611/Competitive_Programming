#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,i,f=0,b=0;
    cin>>n;
    int l[n],g[n];
    for(i=0;i<n;i++)
    {
        cin>>l[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>g[i];
    }
    for(i=0;i<n;i++)
    {
        if(l[i]<=g[i])
            f=1;
        else
            {f=0;break;}
    }
    for(i=0;i<n;i++)
    {
        if(l[i]<=g[n-i-1])
            b=1;
        else
            {b=0;break;}
    }
    if(f==1&&b==1)
        cout<<"both"<<endl;
    if(f==1&&b==0)
        cout<<"front"<<endl;
    if(f==0&&b==1)
        cout<<"back"<<endl;
    if(f==0&&b==0)
        cout<<"none"<<endl;
}
}
