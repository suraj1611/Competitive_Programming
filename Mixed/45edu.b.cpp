#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define sc scanf
#define pf printf

ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else
	return(gcd(b%a,a));
}

int main()
{

	ll n,k,i;
	cin>>n>>k;
	ll a[n+5];
	rep(i,n)
	{
	    cin>>a[i];
	}
	sort(a,a+n);
	ll c=0,j;
	for(i=0;i<n-1;i=j)
{
	for(j=i+1;j<n&&a[j]==a[i];j++);
			if((a[j]<=a[i]+k)&&a[j]>a[i])
		{c=c+j-i;
		}
}
	cout<<n-c<<endl;
}
