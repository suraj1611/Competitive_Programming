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
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

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

	string s,str="";
	cin>>s;
	map <char,ll> m;
	ll l=s.length();
	//std::vector<char> v;
	rep(i,l)
	{
		m[s[i]]++;
	}
	str=s;
	sort(s.begin(), s.end());
	//cout<<s<<" "<<str<<endl;
	//cout<<m['a']<<" " <<m['b']<<" " <<m['c']<<endl;
	
		if(s.compare(str)!=0||(m['c']!=m['a']&&m['c']!=m['b'])||(m['a']==0)||m['b']==0||m['c']==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}
