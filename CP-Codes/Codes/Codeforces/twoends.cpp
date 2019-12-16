/* Code by : Suraj (@suraj1611) */

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
#define maxsize 1105
#define lb cout<<endl;
#define F first
#define S second
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll a[maxsize];

ll maxsums[maxsize][maxsize];

ll max_sums(ll i,ll j)
{
	if(i==j)
		return a[i];
	if(i>j)
		return 0;
	if(maxsums[i][j]!=-1)
		return maxsums[i][j];

	ll u,v;
	if(a[i+1]>=a[j])
		u = a[i] + max_sums(i+2,j);
	else
		u = a[i] + max_sums(i+1,j-1);
	if(a[i]>=a[j-1])
		v = a[j] + max_sums(i+1,j-1);
	else
		v = a[j] + max_sums(i,j-2);
	maxsums[i][j] = max(u,v);
	return maxsums[i][j];

}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;
	ll c=0;
	cin>>n;
	while(n)
	{

		c++;
		ll s=0;
		memset(maxsums,-1,sizeof(maxsums));
		for (int i = 1; i <=n ; ++i)
		{
			cin>>a[i];
			s+=a[i];
		}

	cout << "In game " << c << ", the greedy strategy might lose by as many as "<< 2*max_sums(1,n) - s << " points." << endl;
	cin>>n;

	}
	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}