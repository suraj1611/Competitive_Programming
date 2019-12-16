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
		ll n,x,k;
		cin>>n>>k;
		std::vector <ll> v,w;
		rep(i,n)
		{
			cin>>x;
			if(x<=0)
			{
				v.pb(-x);
			}
			else
				w.pb(x);
		}
		ll i=0,j=0,p=1;
		sort(v.begin(), v.end(),greater <ll> ());
		sort(w.begin(), w.end(),greater <ll> ());
		/*rep(i,v.size())
		cout<<v[i]<<" ";
		lb;
		rep(i,w.size())
		cout<<w[i]<<" ";
		lb*/
		cout<<v.size()<< " "<<w.size()<<endl;
		while(k>0)
		{
			//cout<<i<<" "<<(ll)v.size()-1<<endl;
			if(k==1)
			{
				p*=w[j]%md;
				k--;
				j++;
			}

			
			else if(i<=((ll)v.size()-1))
			{
				//label;
				if(v[i]>w[j])
				{
					p*=v[i]*v[i+1];
					i+=2;
					k-=2;
				}
			}


			else
				{
					//label;
					p*=w[j]%md;
					k--;
					j++;
				}
		}
		
		cout<<p<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

