#include <bits/stdc++.h>
using namespace std;
#define for0(i,n) for(ll i=0; i<n; i++)
#define for1(i,n) for(ll i=1; i<=n; i++)
#define forr(i,n) for(ll j=n-1; j>=0; j--)
#define forabc(a,b,c) for(ll j=a; j<b; j+=c)
typedef long long int ll;
typedef long double ld;
#define pll pair<ll,ll>
#define pb push_back
#define F first
#define S second
#define I insert
#define vll vector<ll>
ll power(ll a, ll b, ll mod){ ll c = 1; while(b>0){ if(b%2) c*=a, c%=mod; b/=2; a*=a; a%=mod; } return c; }
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c=0,mini=INT_MAX,maxi=INT_MIN,d,fu;
        cin>>n;
        ll a[n];
        for0(i,n)
        {
            cin>>a[i];
            mini=min(mini,a[i]);
            maxi=max(maxi,a[i]);
        }
        for0(i,n-1)
        if(a[i]>a[i+1])
        {
            c++;
            if(c==1)
            d=a[i+1];
            fu=a[i];
        }
        if((c==1)&&d==mini&&fu==maxi)
        cout<<"YES"<<endl;
        else if(c==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}

