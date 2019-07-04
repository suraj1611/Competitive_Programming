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
		ll n;
		cin>>n;
		ll a[n];
		unordered_set <ll> s;
		unordered_map <ll,ll> m;
		std::vector <ll> v;
		stack <ll> st;
		rep(i,n)
		{
			cin>>a[i];
			m[a[i]]++;
		}
		for(auto i : m)
		{
			v.pb(i.S);
		}
		sort(v.begin(), v.end() ,greater <ll> () );
		ll sum=0,tp;
		rep(i,v.size())
		{
			//cout<<sum<<endl;
			if(!st.empty())
			{
				//cout<<"top="<<st.top()<<endl;
				tp=st.top();
				if(tp==1)
					break;
				if(tp!=v[i] and tp>v[i])
					st.push(v[i]);
				else
					st.push(tp-1);
			}
			else
			{
				st.push(v[i]);
			}
		}

		while(!st.empty())
		{
			sum+=st.top();
			//cout<<st.top()<<" ";
			st.pop();
		}
		cout<<sum<<endl;



	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}