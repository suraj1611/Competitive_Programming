//Birla Institute of Technology,Mesra,India
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
    	ll n,k;cin>>n>>k;
    	ll i;
    	ll a[n+1];
    	// for(i=1;i<=n;i++)
    	// 	cout<<i<<" ";
    	//cout<<endl;
    	if(k>n/2)
    	{
    		cout<<-1<<endl;
    	}
    	else if (k==0)
    	{
    		for (i=1;i<=n;i++)	
    			cout<<i<<" ";
    		cout<<endl;
    	}
    	else if(k==1)
    	{
    		if(n%2==0)
    		{
    			for(i=1;i<=n;i++)
    			{
    				if(i&1)
    					cout<<i+1<<" ";
    				else
    					cout<<i-1<<" ";
    			}
    			cout<<endl;
    		}
    		else
    		{
    			for(i=1;i<=n;i++)
    			{
    				if(i==n-1)
    					cout<<i+1<<" ";
    				else if(i==n)
    					cout<<i-2<<" ";
    				else if(i&1)
    					cout<<i+1<<" ";
    				else
    					cout<<i-1<<" ";
    			}	
    			cout<<endl;
    		}
    	}
    	else	
    	{
    		ll j=0,flag=0;
    		for (i=k+1;i<=n;i++)
    			{
    				a[j++]=i;
    			}	
    		for (i=1;i<k+1;i++)
    			{
    				a[j++]=i;
    			}
    		for(i=0;i<n;i++)
    		{
    			if(abs(a[i]-(i+1))<k)
    				{
    					flag=1;
    					break;
    				}
    		}
    		if(flag)
   				cout<<-1<<endl;
   			else
   			{
   				for(i=0;i<n;i++)
   				{
   					cout<<a[i]<<" ";
   				}
   				cout<<endl;  
   			}
    		  	
    	}
    }
}