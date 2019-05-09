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
#define pf printf
#define sc scanf
#define maxsize 110005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll vis[maxsize]={0};
std::vector<ll> v[maxsize];
ll val[maxsize];
ll dp[maxsize]={0},maxm;


ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

void dfs(ll u,ll par)
{
	maxm=mn;

	for(ll ch : v[u])
	{
		if(ch==par)
			continue;
		dfs(ch,u);
		maxm=max(abs(val[ch]-val[u]),maxm);
		//cout<<maxm<<endl;
	}

}
 

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;cin>>n;
	rep1(i,n)
	cin>>val[i];
	ll root;

	rep1(i,n)
	{
		ll x;
		cin>>x;
		v[x].pb(i);
		if(x==-1)
			root=i;
	}

	dfs(root,-1);

	cout<<maxm<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

