#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007

ll res[100005];

void fact()
{

    res[0]=1;
    res[1]=1;
    res[2]=2;
    for(int i=3;i<=100005;i++)
    {
        res[i]=((i%md)*(res[i-1])%md)%md;
    }


}
int main()
{
    fact();
    ll n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        cout<<res[x]<<endl;
    }
return 0;
}
