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
	ll i=0,j=0,c=0;
	set <char> st;
	ll sz=st.size();
	while(j<s.length())
	{

		//cout<<s[j]<< " "<<sz<< " "<<st.size()<<" "<<c<<" "<<j<<endl;

		if(s[j]!='?')
		{	
			st.insert(s[j]);
		
			if(sz==st.size())
			{

				st.clear();
				sz=0;
				
			}
			else
			{
				sz=st.size();
				j++;
			}
		}
		else
		c++,j++;

	

		if(st.size()+c==26)
			break;
	}
	//cout<<st.size()<<" "<<c<<endl;
	if(st.size()+c==26)
	{
		map <ll,ll> m;
		set <char> :: iterator it;
		for (it = st.begin(); it != st.end(); ++it)
		{
			//cout<<(*it)<<endl;
			m[*it]++;
			cout<<*it;
		}
		rep(i,26)
		{
			if(m[(char)(i+65)]==0)
				cout<<(char)(i+'A');
		}
	}
	else
	cout<<-1<<endl;


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

