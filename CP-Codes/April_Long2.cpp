#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int main()
{
    int i,j;
int s[10]={0};
    for(i=1;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            s[j-i]++;
        }
    }
int t;
cin>>t;
while(t--)
{
    ll n,w,k=0,i,j;
    cin>>n>>w;
    cout<<s[w]<<endl;
}
}
