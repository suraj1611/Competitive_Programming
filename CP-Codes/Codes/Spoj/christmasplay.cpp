#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,m=10000000000;
cin>>t;
while(t--)
{
    int n,k,i,m=10000000000;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for (i=0;i<n-k+1;i++)
        {
            if ((a[i+k-1]-a[i])<=m)
            {
                m=(a[i+k-1]-a[i]);
            }
        }
    cout<<m<<endl;
}
}
