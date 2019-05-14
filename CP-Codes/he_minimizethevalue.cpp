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

ll val1[maxsize]={0},val2[maxsize]={0};
ll vis[maxsize]={0};
std::vector <ll> v[maxsize];
ll level[maxsize]={0};

void dfs(ll s)
{
	for(ll i=0;i<v[s].size();i++)
	{
		ll p=v[s][i];
		if(!vis[p])
		{
			level[p]=level[s]+1;
			vis[p]=1;
			dfs(p);
			val2[s]+=val2[p];
		}
	}
}

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

	ll n,x;
	cin>>n>>x;

	rep1(i,n)
	{
		cin>>val1[i];
		val2[i]=val1[i];
	}

	rep(i,n-1)
	{
		ll p,q;
		cin>>p>>q;
		v[p].pb(q);
		v[q].pb(p);
	}

	vis[1]=1;
	dfs(1);

	ll t_sum=0;
	rep1(i,n)
	{
		t_sum+=val2[i];
	}

	ll minm=10000000000000000;

	rep1(i,n)
	{
		if(v[i].size()==1 && i==1)
		{
			minm=min(minm, t_sum+((level[i]+2)*x));
		}

		if(v[i].size()<=2 && i!=1)
		{
			minm=min(minm,t_sum+((level[i]+2)*x));
		}
	}

	cout<<minm<<endl;
	//cout<<INT_MAX<<endl;






	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}