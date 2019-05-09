#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
    ll n,i,u=0,r=0,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if((s[i]=='U')&&(s[i+1]=='R')||(s[i]=='R')&&(s[i+1]=='U'))
            {c++;i++;}
    }
    ll ans=n-c;
    cout<<ans<<endl;
}
