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

	ll t;
	cin>>t;
	while(t--)
	{
		//cout<<t<<endl;
		string s;
		ll n;
		cin>>s>>n;
		stack < pair <char,ll > > st;
		ll c1=1,c2=1;char ch;

		if(n==1)
		{
			cout<<"\n";
			continue;
		}

		
		rep(i,s.length())
		{

			if(!st.empty())
			{
				//cout<<st.top()<<endl;
				ch=st.top().F;
			}
			else
			{
				st.push(mp(s[i],c1));
				//cout<<st.top().F<<" "<<st.top().S<<endl;
				continue;
			}

			if(ch==s[i])
				{
					c1=(st.top().S)+1;
					//cout<<c1<<endl;
				}
			else
				/*c2=st.top().S,c1=1;*/
				c1=1;


			st.push(mp(s[i],c1));

			//cout<<st.top().F<<" "<<st.top().S<<endl;

			if(c1==n)
			{
				//cout<<st.size()<<endl;

				rep(j,n)
				{
				//cout<<st.top()<<endl;
				st.pop();
				}

				

				c1=1;

			}
		}
		//cout<<st.size();
		ll p=st.size();
		string str;
		if(st.size()==0)
		{
			cout<<"\n";
			continue;
		}
		rep(i,p)
		{
			//cout<<st.top().F<<" "<<st.top().S<<endl;
			str+=st.top().F;
			st.pop();
		}
		
		//cout<<str<<endl;
		reverse(str.begin(), str.end());
		cout<<str<<"\n";

	}

	/*#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif*/

    return 0;
}

