/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define maxsize 1100005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll power(ll x, ll  y) 
{ 
    ll m=md;
       ll ans=1;
    while (y > 0) 
    {
        if (y & 1)
            ans = (ans * x) % m;
        x = (x * x) % m;
        y >>= 1;
    }
    return ans;
} 

int main()
{
    IOS
    
    #ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
 

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x;
        cin>>n>>k;
        std::vector<ll> v,w;
        rep(i,n)
        {
        	cin>>x;v.pb(x);}
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        sort(v.begin(), v.end());
        ll ans=mx;
        ll minm=v[0],maxm=v[n-1];
        //     if(a[0]*k<a[n-1] && a[0]%k!=0)
        //     {
        //         a[0]*=k;
        //         minm=a[0];
        //     }
        // sort(a,a+n,greater <ll> ());
        // rep(i,n)
        // {
        // 	cout<<a[i]<<endl;
        //     if(a[i]%k==0)
        //     {
        //         ll p=abs(a[i]/k);
        //        // cout<<p<<endl;
        //         ans=min((ll)abs(a[i]/k)-minm,ans);
        //     }
        // }
        rep(i,n)
        {
        	cout<<v[i]<<endl;
        	if(v[i]%k==0)
        	{
        		minm=min(minm,v[i]/k);
        	}
        	else
        	{
        		maxm=max(maxm,v[i]*k);
        	}
        	cout<<maxm
        }
        //sort(w.begin(), w.end());
        cout<<maxm-minm<<endl;

    }

  

    return 0;
}