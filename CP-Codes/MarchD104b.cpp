#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    long long int n,H,i,w=0,mid;
    cin>>n>>H;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    long long int l=1,h=1000000000,ans=1000000000;
    while(l<=h)
    {
        w=0;
        mid=(l+h)/2;
        for(i=0;i<n;i++)
        {
            if(a[i]%mid==0)
                w+=a[i]/mid;
            else
                w+=a[i]/mid+1;
        }
        if(w>H)
            l=mid+1;
        else if(w<=H)
        {
            h=mid-1;
            ans=min(ans,mid);
        }
    }
    cout<<ans<<endl;
}
}
