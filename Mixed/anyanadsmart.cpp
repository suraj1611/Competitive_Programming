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

	ll n,m,k;
	cin>>n>>m>>k;
	map <ll,ll> m1,m2;
	rep1(i,n)
	{
		ll x;
		cin>>x;
		m1[x]=i;
		m2[i]=x;
	}
	ll sum=0;
	rep1(i,m)
	{
		ll x;
		cin>>x;
		if(m1[x]%k==0)
		sum+=m1[x]/k;
		else
		sum+=(m1[x]/k)+1;
		if(m1[x]!=1)
		{
			ll t=m1[x]; //pos=3
			ll s=m2[t-1]; //val=1;
			m1[s]=t;
			m1[x]=t-1;
			m2[t]=s;
			m2[t-1]=x;
			//swap(mpp[x],mpp[x]-1));
		}
		/*cout<<x<<" "<<sum<<endl;
		for (map <ll,ll>::iterator it = mpp.begin(); it != mpp.end(); ++it)
		{
			cout<<it->S<<" ";
		}
		lb;*/
	}
	cout<<sum<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

