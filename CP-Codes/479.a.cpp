#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int main()
{
ll n,k,p;
cin>>n>>k;
while(k--)
{
    p=n%10;
    if(p==0)
        n/=10;
    else
        n--;
}
cout<<n<<endl;
return 0;
}
