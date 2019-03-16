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
#define maxsize 1100005
#define lb cout<<endl;
#define F first
#define S second
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

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
		string s;
		cin>>s;
		ll a[6]={1,2,3,4,6,12};
		std::vector <ll> v;
		ll p=0,k,i,j;
		ll c=0,cnt=0;
		for (i = 0; i < 6; i++)
		{
			for (k = 0; k < a[i] ; ++k)
			{
				for (j =k ; j < 12 ; j+=a[i])
			{
				if(s[j]=='X')
				cnt++;
				if(cnt==12/a[i])
					{
						v.pb(a[i]);
						c++;
						cnt=0;
						k=20;
						break;
					}
			}
			cnt=0;
			}
		}
		sort(v.begin(), v.end());
		cout<<c<<" ";
		for (int i = v.size()-1; i >=0; --i)
		{
		cout<<12/v[i]<<"x"<<v[i]<<" ";
		}
		lb

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

