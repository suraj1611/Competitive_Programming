#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int main()
{
int n;
cin>>n;
int a[n];
cin>>a[0];
int i;
for(i=1;i<n;i++)
{
cin>>a[i];
a[i]+=a[i-1];
}
rep(i,n)
{
    if(a[i]>=ceil((double)a[n-1]/2))
        {cout<<i+1<<endl;break;}
}
return 0;
}
