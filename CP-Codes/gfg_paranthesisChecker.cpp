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
#define maxsize 1100005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll power(ll x, ll  y) 
{ 
	ll m=md;
   	ll ans=1;
    while (y > 0) 
    {
        if (y & 1)
            ans = (ans * x) % m;
        x = (x * x) % m;
        y >>= 1;
    }
    return ans;
} 

bool check(string s)
{
		stack <char> st;
		
		ll flag=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='{' or s[i]=='[' or s[i]=='(')
				st.push(s[i]);
			else if(!st.empty() && (s[i]=='}' and st.top()=='{') or (s[i]==']' and st.top()=='[') or (s[i]==')' and st.top()=='('))
				st.pop();
			else
			{
				flag=1;
				break;
			}
			
		}
		if(st.empty() and flag==0)
			return 1;
		else
			return 0;
}

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
		if(check(s))
			cout<<"balanced"<<endl;
		else
			cout<<"not balanced"<<endl;

	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}