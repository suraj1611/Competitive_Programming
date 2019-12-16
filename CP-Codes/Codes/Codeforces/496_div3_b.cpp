#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define pf printf
#define sc scanf
#define maxsize 1100005
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
/*#define miter map <ll,ll> :: iterator it; for(it=m.begin();it!=m.end();it++)
#define viter vector <ll> :: iterator it; for(it=v.begin();it!=v.end();it++)
#define siter set <ll> :: iterator it; for(it=s.begin();it!=s.end();it++)*/

int main()
{
	IOS
	string s,t;
	cin>>s>>t;
	ll a,b;
	a=s.length();b=t.length();
	ll p=min(a,b);
	ll c=0;
	for(ll i=1;i<=p;i++)
    {
        //cout<<s.substr(a-i,a)<<" "<<t.substr(b-i,b)<<endl;
       if(s[a-i]==t[b-i])
            {
                c++;
            }
        else
            break;
    }

    if(c==0)
        cout<<a+b<<endl;
    else
    cout<<a+b-(2*(c))<<endl;

}

