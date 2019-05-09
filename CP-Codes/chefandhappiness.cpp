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

std::vector <ll> v[maxsize];

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
		ll n;
		cin>>n;
		ll a[n+5];
		
		rep1(i,n)
		{
			cin>>a[i];
			//cout<<a[i]<<endl;
			v[a[i]].pb(i);
		}
		ll flag=0,q;
		rep1(i,n)
		{
			ll p=a[a[i]];
			if(v[p].size()>=2)
			{
				rep(i,v[p].size())
				{
					if(v[p][i]!=p)
					{
						q=v[p][i];

							if(v[q].size()>0)
							{
								flag=1;
								break;
							}
						
					}
				}
				
			}
		}
		rep1(i,n+5)
		v[i].clear();
		if(flag==1)
			cout<<"Truly Happy"<<endl;
		else
			cout<<"Poor Chef"<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

