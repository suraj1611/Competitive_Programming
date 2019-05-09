#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
void rev (int &n)
{
    int r=0;
    while(n>0)
    {
        r=r<<1;
        if(n&1==1)
            r=r^1;
        n=n>>1;
    }
    cout<<r<<endl;
}
int main()
{
int n;
cin>>n;
int a[n];
rep(i,n)
cin>>a[i];
rep(i,n)
{
    if(a[i]%2==0)
        rev(a[i]);
    else
        cout<<a[i]<<endl;
}

return 0;
}
