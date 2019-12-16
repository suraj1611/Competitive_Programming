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
    int n;
    cin>>n;
    set <string> s;
    string str[n];
    rep(i,n)
    {
        scanf("%s",&str[i]);
    }
    sort(str,str+n);
    int sz=0;
    rep(i,n)
    {
        s.insert(str[i]);
        sz++;
    }
    set <string> :: iterator it;
    for(it = s.begin();it != s.end();++it)
        cout << *it <<endl;

}
return 0;
}
