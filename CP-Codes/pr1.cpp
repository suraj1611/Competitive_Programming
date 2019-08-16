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

void gen(int n) 
    {
        //vector < vector <int> > v(n);
        int v[n][n]={0};
       // memset(v,0,sizeof(v));
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                v[i][0]=1;//.push_back(1);
                continue;
            }
            if(i==1)
            {
                v[i][0]=1;v[i][1]=1;
                continue;
            }
            v[i][0]=1;
            for(int j=1;j<=i-1;j++)
            {
                int c = v[i-1][j-1]+v[i-1][j];
                v[i][j]=c;//.push_back(c);
            }
            v[i][i]=(1);
        }

        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<n;j++)
        	{
        		cout<<v[i][j]<<" ";
        	}
        	cout<<endl;
        }

      //return v;
    }

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	 gen(5);
	

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}