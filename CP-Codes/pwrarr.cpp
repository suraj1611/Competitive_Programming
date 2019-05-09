#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
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
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll a[n];
    ll s=0;
    rep(i,n)
    {
        cin>>a[i];
        s+=a[i];
    }
    cout<<s<<endl;

}
}
