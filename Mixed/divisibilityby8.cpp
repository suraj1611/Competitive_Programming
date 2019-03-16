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
int n;

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	cin>>s;
	s="00"+s;
	ll l=s.length();
		for (int i = 0; i <l; ++i)
		{
			for (int j = i+1; j < l; ++j)
			{
				for (int k = j+1; k <= l-1; ++k)
					{
						n=(s[i]-'0')*100 + (s[j]-'0')*10 + (s[k]-'0');
						//cout<<n<<endl;				
						if(n%8==0)
							{cout<<"YES\n"<<n<<endl;return 0;}
					}
			}
		}
		cout<<"NO"<<endl;
	
	


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

