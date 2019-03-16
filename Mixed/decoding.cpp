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

	ll n,pos=0;
	cin>>n;
	string s;
	cin>>s;
	std::vector <char> v;
	rep(i,n)
	{
		v.pb(' ');
	}
	ll l=s.length();
	if(l&1)
	{
		pos=l/2;
		v[pos]=s[0];
		ll j=0;
		for (int i = 1; i <= pos ; ++i)
		{
			v[pos-i]=s[++j];
			v[pos+i]=s[++j];
		}
	}

	else 
	{
		pos=l/2-1;
		v[pos]=s[0];
		v[pos+1]=s[1];
		ll lf=pos,rt=pos+1;
		for (int i = 2 ; i < l; ++i)
		{
			if((i&1)==0)
				v[--lf]=s[i];
			else
				v[++rt]=s[i];
		}
	}
	rep(i,n)
	cout<<v[i];
	
	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

