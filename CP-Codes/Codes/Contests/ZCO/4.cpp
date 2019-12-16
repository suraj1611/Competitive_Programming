
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
ll n,k,c=0,i,j;
cin>>n>>k;
ll a[n];
rep(i,n)
cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            {
                if(abs(a[i]-a[j])>=k)
                    c++;
            }
    }
cout<<c<<endl;
}
