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

ll n;
char l[maxsize],r[maxsize];
std::vector < pair <ll,ll > > ans;
map <char, std::vector <ll> > a,b;

ll sol(char p,char q )
{
	ll sz=min(a[p].size(),b[q].size());
	while(sz>0)
	{	
		ans.pb(mp(a[p].back(),b[q].back()));
		a[p].pop_back();b[q].pop_back();
		sz--;
	}
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

	ll n;
	cin>>n;
	rep1(i,n)
	{
		cin>>l[i];
		a[l[i]].pb(i);
	}
	rep1(i,n)
	{
		cin>>r[i];
		b[r[i]].pb(i);
	}
	for(char i='a';i<='z';i++)
		sol(i,i);
	for(char i='a';i<='z';i++)
		sol('?',i);
	for(char i='a';i<='z';i++)
		sol(i,'?');
	for(char i='a';i<='z';i++)
		sol('?','?');
	cout<<ans.size()<<endl;
	for(auto i: ans)
	{
		cout<<i.F<<" "<<i.S<<endl;
	}



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}