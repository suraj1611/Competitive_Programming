//AUTHOR: Akash Shrivastva
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 1000000007
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
#include <iostream>   // std::cout
#include <string> 
string s;ll n;
vector < string > v;
void f(ll i)
{
	if (i<n)
	{
		string n1,n2,n3;
		ll j;
		// 
		j=(i+n-1)/2;
		if (j+1<n)
			n1=(s.substr(i,j+1-i)),n2=(s.substr(j+1,n-j-1));
		if (j+1==n)	n1=(s.substr(i,j+1-i)),n2="";
		if (j+2<=n)
			n3=(s.substr(i,j+2-i));
		else	n3="";
		cout<<n1<<" "<<n2<<endl;
		if (n1>=n2)
			v.pb(n1),f(j+1);
		else	v.pb(n3),f(j+2);
	}
	else	
		return ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
	#endif
	
	ll t;cin>>t;
	while (t--)
	{
		cin>>s;
		n=s.length();
		ll i=0;
		v.clear();
		f(i);
		cout<<v.size()<<endl;
		for (i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
}