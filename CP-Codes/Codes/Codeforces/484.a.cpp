#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else
	return(gcd(b%a,a));
}
int main()
{
int n,k=0;
cin>>n;
string s,a,b;
cin>>s;
int l=s.length();
s="0"+s+"0";
if(s.compare("0")==0)
{cout<<"No"<<endl;return 0;}
//cout<<l<<endl;
rep(i,l)
{
    a=s.substr(i,2);
    //cout<<a<<endl;
    if(a.compare("11")==0)
       {
           k=1;break;
       }
}
if(k!=1)
{
rep(i,l)
{
    a=s.substr(i,3);
    if(a.compare("000")==0)
       {
           k=1;break;
       }
}
}
if(k==1)
    cout<<"No"<<endl;
else
    cout<<"Yes"<<endl;
return 0;
}
