/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(ll i=0; i<n; i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
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

ll a[maxsize];
set <ll> s;

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,q;
	cin>>n>>q;
	ll maxm=mn;
	rep1(i,n)
	{
		ll x;
		cin>>x;
		if(x)
		{
		s.insert(i);
		a[i]=x;
		maxm=max(i,maxm);
		}
	}
	set <ll> :: iterator itr;
	while(q--)
	{
		ll x,y;
		cin>>x>>y;
		y++;
		ll left,right;
		if(x==1)
		{
			if(a[y]==0)
			{
				a[y]=1;
				s.insert(y);
				maxm=max(y,maxm);
			}
		}
		else
		{
			if(s.empty())
			{
				left=-1;right=-1;
				cout<<left<<" "<<right<<endl;
				continue;
			}
			itr=s.begin();
			if(*itr>=y)
			{
				left=-1;
			}
			else if(maxm<y)
			{
				left=maxm-1;
			}
			else
			{
				itr=s.upper_bound(y-1);
				while(*itr>=y)
					itr--;
				left=*itr - 1;
			}

			itr=s.end();
			itr--;
			if(*itr<=y)
				right=-1;
			else
			{
				itr=s.upper_bound(y-1);
				while(*itr<=y)
					itr++;
				right=*itr-1;
			}

			cout<<left<<" "<<right<<endl;
		}
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

