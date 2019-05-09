/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll int
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
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
/*#define miter map <ll,ll> :: iterator it; for(it=m.begin();it!=m.end();it++)
#define viter vector <ll> :: iterator it; for(it=v.begin();it!=v.end();it++)
#define siter set <ll> :: iterator it; for(it=s.begin();it!=s.end();it++)*/

ll prime[maxsize];


ll bfs (pair <ll,ll> p1,pair <ll,ll> p2)
{
	bool bd[8][8];
	rep(i,8)
	{
		rep(j,8)
		bd[i][j]=true;
	}
	queue <pair <ll,ll> > q;
	q.push(p1);
	q.push(mp(-1,-1));
	ll c=0;
	while(!q.empty())
	{
		pair <ll,ll> p = q.front();
		q.pop();
		if(p1==p2)
			break;
		if(p==mp(-1,-1))
		{
			c++;
			q.push(p);
			continue;
		}
		ll i,j;
		i=p.first;j=p.second;
		ll x[]={i+1,i-1,i-1,i+1,i+2,i-2,i-2,i+2};
		ll y[]={j+2,j+2,j-2,j-2,j+1,j+1,j-1,j-1};
		rep(k,8)
		{
			ll xx=x[k],yy=y[k];
			if(((0 <= xx) and (xx < 8)) and ((0 <= yy) and (yy < 8)) and bd[xx][yy])
			{
				q.push(mp(xx,yy));
				bd[xx][yy]=false;
			}
		}
	}
	return c;

}

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("in.txt", "r", stdin);
    // for writing output to output.txt
    freopen("out.txt", "w", stdout);
	#endif
	ll t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		ll a1,a2,b1,b2;
		a1=a[0]-'a';
		a2=a[1]-'0'-1;
		b1=b[0]-'a';
		b2=b[1]-'0'-1;
		cout<<a1<<a2<<" "<<b1<<b2<<endl;
		ll ans=bfs(mp(a1,a2),mp(b1,b2));
		cout<<ans<<endl;
	}

}

