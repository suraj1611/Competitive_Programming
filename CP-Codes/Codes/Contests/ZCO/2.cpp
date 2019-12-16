#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
    ll n,h,x,i;
    cin>>n>>h;
        ll a[n];
    rep(i,n)

    cin>>a[i];
    vector <ll> v;
    cin>>x;
    while(x!=0)
    {
        v.push_back(x);
        cin>>x;
    }
    vector <ll> :: iterator it;
    i=0;
    int flag=0;
    for(it = v.begin();it != v.end();++it)
        {
            if(*it==1&&i!=0)
                i--;
            else if(*it==2&&i!=n-1)
                i++;
             else if(*it==3&&a[i]!=0&&flag==0)
                {a[i]--;flag=1;}
            else if(*it==4&&a[i]<h&&flag==1)
                {a[i]++;flag=0;}

        }
        rep(i,n)
        cout<<a[i]<<" "<<endl;
}
