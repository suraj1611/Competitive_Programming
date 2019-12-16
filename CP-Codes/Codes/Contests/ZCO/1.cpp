#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
ll maxrev=INT_MIN;
ll n,i;
cin>>n;
ll a[n];
rep(i,n)
cin>>a[i];
sort(a,a+n);
rep(i,n)
{
    if(a[i]*(n-i)>maxrev)
        maxrev=a[i]*(n-i);
}
cout<<maxrev<<endl;
}
