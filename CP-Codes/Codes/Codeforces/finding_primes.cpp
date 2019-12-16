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
#define maxsize 100005
#define lb cout<<endl;
#define F first
#define S second
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

std::vector <bool> prime(10000005,true);
void seive()
{
	for (int i = 2; i*i<=10000005; ++i)
	{
		if(prime[i]==true)
		{
			for (int j = 2*i; j <=10000005 ; j+=i)
			{
				prime[j]=false;
			}
		}
	}
	prime[1]=false;
}

int main()
{
	IOS

	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	seive();

	ll t;
	cin>>t;
	while(t--)
	{
		ll n,ans=0;
		cin>>n;
		if((prime[n]==true)&&(n!=2))
			ans=2;
		else
			ans=1;
		
		cout<<ans<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}