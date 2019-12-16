#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else
	return(gcd(b%a,a));
}
int main()
{
    ll n,s,q,i,j,x,y,xi;
    char ch;
    cin>>n>>s>>q;
    vector <ll> v[s+5];
    for(i=0;i<s;i++)
    {
        cin>>x;
        for(j=0;j<x;j++)
        {
            cin>>xi;
            v[i].push_back(xi);
        }
    }
    bool a[n];
    rep(i,n)
    {
        a[i]=false;
    }
    rep(p,q)
    {
        cin>>ch;
        if(ch=='c')
        {
            cin>>x>>y;
            int c=0;
            for(i=x;i<=y;i++)
            {
                if(a[i-1])
                    c++;
            }
            cout<<c<<endl;
        }
        else if(ch=='d')
        {
            cin>>x>>y;
            for(i=x-1;i<=y-1;i++)
            {
            for(j=0;j<v[i].size();j++)
            {
                if(!a[v[i][j]-1])
                    a[v[i][j]-1]=true;
                else
                a[v[i][j]-1]=false;
            }
            }
        }
        else if(ch=='f')
        {
            cin>>x;
            a[x-1]=false;
        }
    }
}
