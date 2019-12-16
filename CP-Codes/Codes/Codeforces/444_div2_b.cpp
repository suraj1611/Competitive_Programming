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
	ll n;
	cin>>n;
	map <ll,ll> m;
	rep(i,n)
	{
	    for(ll j=0;j<6;j++)
        {
            ll x;
            cin>>x;
            m[x]++;
        }
	}
	ll c=1,i=1;
	while(true)
    {
        while(c!=0)
        {
        c=i%10;
        if(m[c]>0)
        {
            c/=10;
        }
        else
        {
            cout<<0<<endl;
            return 0;
        }
        }
        i++;
    }

}


