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

std::vector <ll> fact(1000005,1);

void div()
{
	for(long long i=2;i<1000005;i++)
        for(long long j=i;j<1000005;j+=i)
        fact[j]++;
}

long long modexpo(long long a,long long b,long long m)
{
    if(b==0)
        return 1;
    if(b&1)
    {
        long long ans=modexpo(a,b/2,m)%m;
        long long ret=((((ans%m)*(ans%m))%m)*(a%m))%m;
        return ret;
    }
    else
    {
        long long ans=modexpo(a,b/2,m);
        long long ret=((ans%m)*(ans%m))%m;
        return ret;
    }

}

long long bsqrt(long long n)
{
    long long low=1,high=n,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(mid*mid==n)
            return mid;
        if(mid*mid<n)
            low=mid+1;
        if(mid*mid>n)
            high=mid-1;
    }
    return mid;
}

int main()
{
	IOS
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("in.txt", "r", stdin);
    // for writing output to output.txt
    freopen("out.txt", "w", stdout);
#endif
    div();
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x,prod,ans;
		cin>>n>>x;
		
		if(n==0)
			ans=0;
		else
		{
			if(fact[n]&1)
			{
				ans=modexpo(n,x*(fact[n]/2),md);
				ans=ans*modexpo(bsqrt(n),x,md)%md;
			}
			else
			{
				ans=modexpo(n,x*(fact[n]/2),md);
			}
		}
		cout<<ans<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

