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
	ll k=0,flag=0;
	map <char,ll> m;
	// while(1)
	// {
	// rep(i,26)
	// {
	// 	string a=(char)('a'+i);
	// 	string b=(char)('a'+i);
	// 	string str=a+b;
	// 	cout<<str<<endl;
	// 	ll l=s.length();
	// 	size_t f = s.find(str);
	// 	if(f!= string::npos)
	// 		{s=s.substr(0,f)+s.substr(f,l-2);break;}
	// 	else
	// 		flag=1;
	// 	cout<<s<<endl;
	// 	k++;
	// }
	// if(flag)
	// 	break;
	// }
	rep(i,s.length())
	m[s[i]]++;
	sort(s.begin(), s.end());
	std::vector <ll> v;
	set <ll> st;
	rep(i,s.length()-1)
	{
		if(s[i]==s[i+1])
			st.insert(i);
	}
	rep(i,s.length())
	{
		ll p=abs(m[s[i]]-m[s[i+1]]);
		if(p.find())
	}
	

	k=0;
	// rep(i,v.size())
	// {
	// 	k++;
	// 	if(v[i]!=0&&v[i]!=s.length()-2);
	// 	{
	// 		//cout<<s[v[i]-1]<< " "<<s[v[i]+2]<<endl;
	// 		if(s[v[i]-1]==s[v[i]+2])
	// 			k++;
	// 	}
	// }
	rep(i,v.size())
	{
		k++;
		if(v[i]!=0&&v[i]!=s.length()-2);
		{
			//cout<<s[v[i]-1]<< " "<<s[v[i]+2]<<endl;
			if(s[v[i]-1]==s[v[i]+2])
				k++;
		}
	}
	if(k&1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

