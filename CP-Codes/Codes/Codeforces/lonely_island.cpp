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
std::vector <ll> v[maxsize];
stack <ll> st;
double prob[maxsize];


void toposort(ll s) 
{
	vis[s]=1;
	for(auto i : v[s])
	{
		if(!vis[i])
			toposort(i);		
	}
	st.push(s);
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

	ll n,m,r;
	cin>>n>>m>>r;
	map <ll,ll> deg;


	rep(i,m)
	{
		ll x,y;
		cin>>x>>y;
		v[x].pb(y);
		deg[x]++;
	}

	toposort(r);
	prob[r]=1;
	double maxm=-1;
	set <ll> v1;

	while(!st.empty())
	{
		ll p=st.top();
		if(deg[p]==0)
		{
			maxm=max(maxm,prob[p]);
			v1.insert(p);
		}
		st.pop();
		for(auto i : v[p])
		{
			prob[i]+=prob[p]/(double)deg[p];
		}
	}

	for(auto i  : v1)
	{
		if(maxm-prob[i]<=0.000000001)
			cout<<i<<" ";
	}

	



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

