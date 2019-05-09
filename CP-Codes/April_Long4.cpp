#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int main()
{
int t;
cin>>t;
while(t--)
{
    ll n,a=0,b=0,i,c=0;
    string s;
    cin>>s>>n;
    string str;
    for(i=1;i<=n;i++)
        str.append(s);
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='a')
            a++;
        else
            b++;
        if(a>b)
            c++;
    }
       cout<<c<<endl;
}
}
