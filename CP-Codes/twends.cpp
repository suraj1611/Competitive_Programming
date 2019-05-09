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
#define maxsize 1500
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll a[maxsize];
ll dp[maxsize][maxsize];

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

ll solve(ll i,ll j)
{
	if(i==j)
		return a[i];
	if(i>j)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	
	ll p,q;
	if(a[i+1]>=a[j])
		p=a[i]+solve(i+2,j);
	else
		p=a[i]+solve(i+1,j-1);

	if(a[i]>=a[j-1])
		q=a[j]+solve(i+1,j-1);
	else
		q=a[j]+solve(i,j-2);

	return dp[i][j]=max(p,q);
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,c=0;
	cin>>n;
	while(n)
	{
		
		memset(dp,-1,sizeof(dp));
		ll sum=0;
		rep(i,n)
		cin>>a[i],sum+=a[i];

		cout << "In game " << ++c << ", the greedy strategy might lose by as many as "<< solve(0,n-1) - (sum-solve(0,n-1)) << " points." << endl;
		cin>>n;
		//cout<<p1<<" "<<p2<<endl;

		
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

