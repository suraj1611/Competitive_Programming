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

double func(double x)
{
	//return x*x*x - 5*x +1;
	return cos(x) - x*exp(x);
	//return x-0.12345678;
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	double a,b,c,u,v,w,pre;
	ll p;
	cin>>a>>b>>p;
	u=func(a);v=func(b);
	pre=pow(10,-p);
	//cout<<pre<<endl;
	if(u*v>0)
			{
				cout<<"NOT POSSIBLE"<<endl;
				return 0;
			}
	if(func(a)<0&&func(b)>0)
	swap(a,b);
	while(abs(a-b)>=pre)
	{

	c=(a+b)/2;
	w=func(c);

		if(w>0)
		{
			a=c;
		}
		else
		{
			b=c;
		}
	}
	//cout<<setprecision<<setfixed(5);
	//cout<<"Root Found"<<endl;
	cout<<b<<endl;
	

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

