
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int GCD_cal(int ar[], int n)
{
    int ans = ar[0];
    for (int i = 1; i < n; i++)
        ans = gcd(ar[i], ans);

    return ans;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,c=0,i,res=0;
    cin>>n;
    int a[n];
    rep(i,n)
    {
        cin>>a[i];
        a[i]*=-1;
    }
    sort(a,a+n);
    rep(i,n)
    a[i]*=-1;
    res=GCD_cal(a,n);
    //cout<<res<<endl;
    while(n>1&&res!=1)
    {
        --n;
        res=GCD_cal(a,n);
        c++;
    }
    if(res==1)
        cout<<c<<endl;
    else
        cout<<-1<<endl;
}
return 0;
}
