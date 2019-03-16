/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
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
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	ll pos=(k<=n-k)? 0:n-1;
	if(pos==0)
	{
		rep(i,k-1)
		cout<<"LEFT"<<endl;
		rep(i,s.length()-1)
		{
			cout<<"PRINT "<<s[i]<<endl;
			cout<<"RIGHT"<<endl;
		}
		cout<<"PRINT "<<s[n-1]<<endl;
	}
	else
	{
		rep(i,n-k)
		cout<<"RIGHT"<<endl;
		for(int i=s.length()-1;i>0;i--)
		{
			cout<<"PRINT "<<s[i]<<endl;
			cout<<"LEFT"<<endl;
		}
		cout<<"PRINT "<<s[0]<<endl;
	}


	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

