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
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
/*#define miter map <ll,ll> :: iterator it; for(it=m.begin();it!=m.end();it++)
#define viter vector <ll> :: iterator it; for(it=v.begin();it!=v.end();it++)
#define siter set <ll> :: iterator it; for(it=s.begin();it!=s.end();it++)*/

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("in.txt", "r", stdin);
    // for writing output to output.txt
    freopen("out.txt", "w", stdout);
#endif
    string s,t;
ll c=0;

	ll n;
	cin>>n;
	cin>>s;
	cin>>t;
	std::vector<int> v;
	std::vector<int> u;
	int ar[n];
	rep(i,n)
	{
		v.pb(s[i]-97);
	}
	rep(i,n)
	{
		u.pb(t[i]-97);
	}
	string a="",b="";
	/*strcpy(a,"hello");
	strcpy(b,t);*/
	a=s;
	b=t;
	//cout<<" hello"<<a<<" "<<b<<endl;
	sort(v.begin(), v.end());
	sort(u.begin(), u.end());
	rep(i,n)
	if(v[i]!=u[i])
	{
		cout<<-1<<endl;
		return 0;
	}
	//cout<<a<<" "<<b<<endl;
	while(true)
	{
	rep(i,n)
	{
	if(s[i]!=t[i])
	{
		swap(s[i],s[i+1]);
		ar[c]=i+1;
		c++;
		if(c>=10000)
		{
			cout<<-1<<endl;
		return 0;
		}
	}
}
	if(s.compare(t)==0)
		break;
	}
	cout<<c<<endl;
	rep(i,c)
	cout<<ar[i]<<" ";


}

