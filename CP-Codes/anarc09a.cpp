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
string s;
int k=0;
cin>>s;
while(s[0]!='-')
{
    k++;
    int l=s.length();
    int c=0,ans=0,o=0;
    stack <char> x;
    rep(i,l)
    {
        if(s[i]=='{')
            {x.push(s[i]);}
        else
        {
        if(x.empty()!=1)
        {
            x.pop();
        }
        else
        {
            x.push(s[i]);
            c++;
        }
        }
    }
    ans=(x.size()/2)+c;
    cout<<k<<". "<<ans<<endl;
    cin>>s;
}
}
