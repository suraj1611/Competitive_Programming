#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
int main()
{
int t;
cin>>t;
while(t--)
{
    int x,a;
    cin>>x>>a;
    int n=a-x;
    int m=n*(a+1);
    m-=(n*(n-1))/2;
    cout<<m<<endl;
}
return 0;
}
