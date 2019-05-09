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
#define maxsize 1100005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll vis[maxsize]={0};
std::vector <ll> adj[maxsize];
double c=-1;
double ans=0;

double dfs(ll s)
{
	double ans=0,c=0;
	vis[s]=1;	
	for(ll i=0;i<adj[s].size();i++)
	{
		
		if(!vis[adj[s][i]])
			{
				c++;
				//cout<<c<< " "<<ans<<endl;
				ans+=dfs(adj[s][i]);
			}
	}
	//cout<<"asa    "<<c<< " "<<ans<<endl;
	if(c!=0)
		return ans/c+1;
	else
		return 0;
}


ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	double n;
	cin>>n;
	rep1(i,n-1)
	{
		ll x,y;
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	cout<<fixed<<setprecision(15);
	//cout<<ans<< " "<<c<<endl;
	cout<<dfs(1)<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

