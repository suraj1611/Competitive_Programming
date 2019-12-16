#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int main()
{
ll n,k;
cin>>n>>k;
ll a[n];
rep(i,n)
cin>>a[i];
sort(a,a+n);
if(a[k-1]!=a[k]&&k!=0)
    cout<<a[k-1];
else if(k==0)
{
    if(a[0]>1)
    cout<<a[0]-1;
    else
    cout<<-1<<endl;
    return 0;
}
else
    cout<<-1<<endl;
return 0;
}
