#include<bits/stdc++.h>
#include <string>
#include <iomanip>
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
    double a,b,c,d,s,ar;
    cin>>a>>b>>c>>d;
    s=(a+b+c+d)/2;
    ar=sqrt((s-a)*(s-b)*(s-c)*(s-d));
    //ar=3.1526;
    cout << fixed;
    cout<<setprecision(4)<<ar<<endl;
}
return 0;
}
