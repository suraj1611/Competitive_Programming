#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
cin>>t;
while(t--)
{
   ll int n,p;
   cin>>n;
   p=n%6;
   ll int a[6]={0,1,4,6,5,2};
   cout<<a[p]<<endl;
}
}
