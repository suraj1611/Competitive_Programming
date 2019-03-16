/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define pf printf
#define sc scanf
#define maxsize 1000005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll ar[maxsize],csa[maxsize];
 
int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,q;
	cin>>n>>q;
	double x[n],y[n],r[n];
	rep(i,n)
	{
		cin>>x[i]>>y[i]>>r[i];
	}
	//vector < pair <ll,ll> > v;
	memset(ar,0,sizeof(ar));
	memset(csa,0,sizeof(csa));
	rep(i,n-1)
	{
		for (ll j = i+1; j < n; ++j)
		{
			double c1c2=sqrt(((x[i]-x[j])*(x[i]-x[j])) + ((y[i]-y[j])*(y[i]-y[j])));
			double d=r[i]+r[j];
			double r1=max(r[i],r[j]);
			double r2=min(r[i],r[j]);
			//double a,b;			
			if(c1c2>=d)
			{
				ar[(ll)ceil(c1c2-d)]++;
				ar[(ll)floor(c1c2+d+1)]--;
			} 
			else if(c1c2<(r1-r2))
			{
				ar[(ll)ceil(r1-(c1c2+r2))]++;
				ar[(ll)floor(d+c1c2)+1]--;
			}		
			else if(c1c2==(r1-r2))
			 {
				ar[0]++;ar[1]--;
			}
			else
			{
				ar[0]++;
				ar[(ll)floor(c1c2+d)+1]--;				
			}
			//v.pb(mp((ll)a,(ll)b));
	}

	csa[0]=ar[0];
	for (int i = 1; i < maxsize; ++i)
	{
	csa[i]=csa[i-1]+ar[i];
	}
	while(q--)
	{
		ll x;
		cin>>x;
		if(x>1e6)
		cout<<0<<endl;
		else
		cout<<csa[x]<<"\n";
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
}

