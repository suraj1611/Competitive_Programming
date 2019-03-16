#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long int
#define rep(i,n) for( i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int maxindex(int a[],int n)
{
    int k=0,i,m=-1;
    rep(i,n)
    {
        if(m<a[i])
        {
        m=a[i];
        k=i;
        }
    }
    return i;
}
int main()
{
int n,i,x=-1,j,sum=0,t=0;
string s,str1,str2;
int c[100]={0};
cin>>n>>s;
for(i=0;i<n-1;i++)
{
    sum=s[i]+s[i+1];
    for(j=0;j<n-1;j++)
    {
       t=s[j]+s[j+1];
        if(t==sum);
        c[i]++;
    }
}
x=maxindex(c,n);
cout<<s.substr(x,x+1)<<endl;
return 0;
}

