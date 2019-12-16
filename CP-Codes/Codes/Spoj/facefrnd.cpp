#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
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
int n,sz=0;
sc("%d",&n);
int a[n];
set <int> s;
rep(i,n)
{
int m,x;
 cin>>a[i];
 cin>>m;
 rep(i,m)
 {
     cin>>x;
     s.insert(x);
 }
}
sz=s.size();
rep(i,n)
{
    if(s.count(a[i]))
        sz--;
}
pf("%d\n",sz);
return 0;
}
