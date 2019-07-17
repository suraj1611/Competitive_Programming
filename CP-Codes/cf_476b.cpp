/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long
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

double fact[20];

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

void fac()
{
	fact[0]=1;
	fact[1]=1;
	for(ll i=2;i<15;i++)
	{
		fact[i]=i*fact[i-1];
	}
} 

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	string s1,s2;
	fac();
	cin>>s1>>s2;
	ll a=0,b=0,a1=0,b1=0,q=0;
	double ans=0;
	rep(i,s1.length())
	{
		if(s1[i]=='+')
			a++;
		else
			b++;
	}
	rep(i,s2.length())
	{
		if(s2[i]=='+')
			a1++;
		else if(s2[i]=='-')
			b1++;
		else
			q++;
	}
	//cout<<q<<" "<<a1<<" "<<b1<<endl;
	if(a1>a or b1>b)
		ans=0;
	else if(q==0)
		ans=1;
	else
	{
		ans = (1/(pow(2,q)))*(fact[q]/(fact[a-a1]*fact[b-b1]));
	}
	cout<<setprecision(12)<<fixed;
	cout<<ans<<endl;



	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}