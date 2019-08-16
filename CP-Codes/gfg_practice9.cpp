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
#define endl "\n"
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll power(ll x, ll  y) 
{ 
	ll m=1;
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
	    ll n;cin>>n;
	    unordered_set <char> s;
	    unordered_map <char,ll> m;
	    char c;
	    cin>>c;
	    s.insert(c);
	    cout<<c<<" ";
	    m[c]++;
	    ll flag=0;
	    rep(i,n-1)
	    {
	        cin>>c;
	        for(auto it : s)
	        {
	            //cout<<it<<" "<<m[it]<<endl;
	            flag=0;
	            if(m[it]==0)
	            {
	                cout<<it<<" ";
	                flag=1;
	                break;
	            }
	        }
	        s.insert(c);
	        if(!flag)
	        cout<<-1<<" ";
	        m[c]++;
	    }
	    cout<<endl;
	    
	}



    return 0;
}