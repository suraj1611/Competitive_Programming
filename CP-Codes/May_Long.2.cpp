#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int calc_sum(int d[],int m)
{
    int sum=0,i;
    rep(i,m)
    {
      sum+=d[i];
    }
    return sum;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,k,c=0,i,m,sum=0;
    cin>>n>>k;
    int a[n];
    vector <int> v;
    vector <int> w;
    rep(i,n)
    {
    cin>>a[i];
    if(i%2==0)
        {
        a[i]=a[i]*(-1);
        v.push_back(a[i]);
        }
    else
        w.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());
    m=n/2;
    rep(i,m)
    {
        v[i]=v[i]*(-1);
    }
    int d[m];
    rep(i,m)
    {
        d[i]=v[i]-w[i];
    }
    sort(d,d+m);
    rep(i,m)
    {
        sum+=d[i];
    }
    for(i=m-1;i>=0;i--)
    {
        if(k<=0)
            break;
        if(d[i]>0)
            d[i]*=-1;
        k--;
    }
    if(calc_sum(d,m)<0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
return 0;
}
