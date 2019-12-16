#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
int search(vector <int> a,int n,int x)
{
    rep(i,n)
    {
    if(a[i]==x)
        return 1;
    }
    return 0;
}
int main()
{
int n,i;
cin>>n;
int a[n];
rep(i,n)
{
    cin>>a[i];
}
vector <int> v;
for(i=n-1;i>=0;i--)
{
    if(search(v,v.size(),a[i])==0)
        v.push_back(a[i]);
}
cout<<v.size()<<endl;
for(i=v.size()-1;i>=0;i--)
cout<<v[i]<<" ";
return 0;
}
