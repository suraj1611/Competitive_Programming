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

string s;
ll n=100005;

int lps(string str) 
{ 
	int maxLength = 1;

	int len = str.length(); 

	int low, high; 
	for (int i = 1; i < len; ++i) 
	{ 

		low = i - 1; 
		high = i; 
		while (low >= 0 && high < len && str[low] == str[high]) 
		{ 
			if (high - low + 1 > maxLength) 
			{ 
				maxLength = high - low + 1; 
			} 
			--low; 
			++high; 
		} 
 
		low = i - 1; 
		high = i + 1; 
		while (low >= 0 && high < len && str[low] == str[high]) 
		{ 
			if (high - low + 1 > maxLength) 
			{ 
				maxLength = high - low + 1; 
			} 
			--low; 
			++high; 
		} 
	} 

	return maxLength; 
} 


int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	bool prime[n];
	memset(prime,true,sizeof(prime));

	for (int p=2; p*p<=n; p++) 
    {  
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    }
    prime[1]=false;
	ll t;
	cin>>t;
	
	while(t--)
	{
		cin>>s;
		//cout<<lps(s)<<endl;
		if(prime[lps(s)]==0)
			cout<<"NOT PRIME"<<endl;
		else
			cout<<"PRIME"<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

