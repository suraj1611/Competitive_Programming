#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
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
    int n,k=0;
    cin>>n;
    int a[n];
    rep(i,n)
    cin>>a[i];
    rep(i,n)
    {
        if(a[i]>i)
        {
            k=1;
            break;
        }
    }
    if(k==1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;

}
return 0;
}
