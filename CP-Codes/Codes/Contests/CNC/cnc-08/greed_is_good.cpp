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
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	IOS
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    string p;
	    cin>>p;
	    ll i=0,ct=0;
	    ll q=k;
	    for(i=0;i<n;i++)
	    {
	        if(p[i]=='9')
                ct++;
	    }

	    for(i=0;i<n&&k--;i++)
	    {
	        p[i]='9';
	    }

	    if(ct==n)
        {
            i=n-1;
            while(q--)
            {
                p[i]='8';
                i--;
            }
        }

        rep(i,n)
        cout<<p[i];

        cout<<endl;
	}

}

