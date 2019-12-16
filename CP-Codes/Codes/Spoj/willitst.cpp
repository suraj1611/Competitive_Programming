#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll unsigned long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
int main()
{
ll n;
cin>>n;
set <ll> s;
s.insert(n);
while(n>1)
{
    int sz=s.size();
    if(n%2==0)
        n/=2;
    else
        n=3*n+3;
    s.insert(n);
    if(s.size()==sz)
    {
        cout<<"NIE"<<endl;
        return 0;
    }
}
cout<<"TAK"<<endl;
return 0;
}
