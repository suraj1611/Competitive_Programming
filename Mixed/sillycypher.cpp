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
		ll l=s.length();
		while((sqrt(l)-floor(sqrt(l)))!=0)
		{
			s+="_";
			l=s.length();
		}
		//cout<<s<<endl;
		ll p=(ll)sqrt(l);

		std::vector <char> v[p];

		rep(i,l)
		{
			v[i%p].pb(s[i]);
		}


		ll n;
		cin>>n;
		rep(i,n)
		{
			ll x,y;
			cin>>x>>y;
			x--;y--;
			swap(v[x],v[y]);
		}
		string str="";
		rep(i,sqrt(l))
		{
			rep(j,sqrt(l))
			{
				str+=v[j][i];
			}
		}


		rep(i,str.length())
		{
			if(str[i]!='_')
				cout<<str[i];
		}
		lb;
		
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

