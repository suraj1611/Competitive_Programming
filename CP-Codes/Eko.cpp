#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,m,i,l=1,h=2000000000,sum=0,mid,ans=0;
cin>>n>>m;
int a[n];
for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
sort(a,a+n);
while(l<=h)
{
    sum=0;
    mid=(l+h)/2;
    for(i=0;i<n;i++)
    {
        if(a[i]>=mid)
        sum+=a[i]-mid;
    }

    if(sum<m)
        h=mid-1;
    else if(sum>=m)
    {
        l=mid+1;
        ans=max(ans,mid);
    }
}
cout<<ans<<endl;
}
