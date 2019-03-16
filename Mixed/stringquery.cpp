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

ll bit[27][maxsize],vis[maxsize]={0};

void update(ll x,ll c,ll val)
{
	for(;x<=maxsize;x+=x&-x)
		bit[c][x]+=val;
}

ll query(ll x,ll c)
{
	ll s=0;
	for(;x>0;x-=x&-x)
		s+=bit[c][x];
	return s;
}

ll bs(ll x,ll c)
{
	ll l=1,h=maxsize,mid,ans;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(query(mid,c)>=x)
		{
			ans=mid;
			h=mid-1;
		}
		else
			l=mid+1;
	}
	update(ans,c,-1);
	return ans;
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

	string s;
	cin>>s;
	rep(i,s.length())
	{
		update(i+1,s[i]-'a',1);
	}
	ll q;
	cin>>q;
	while(q--)
	{
		ll x;char c;
		cin>>x>>c;
		ll p=bs(x,c-'a')-1;
		vis[p]=1;
	}
	rep(i,s.length())
	{
		if(vis[i]==0)
			cout<<s[i];
	}
	lb;
	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

