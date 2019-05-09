#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000007
void sum(long long int n)
{
    long long int s=((3*((n*(n+1))/2))-n)%md;
    cout<<s<<endl;
}
int main()
{
ll t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
sum(n);
}
}
