#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,c=0,i;
    cin>>n;
    int a[n],b[n];
    rep(i,n)
    {cin>>a[i];b[i]=a[i];}
    sort(a,a+n);
    rep(i,n)
    cout<<a[i]<<"\t";
    rep(i,n)
    cout<<endl<<b[i]<<"\t";
    rep(i,n)
   {
       if((a[i]==b[i]))
        continue;
       else if(c>1)
        break;
       else
       c++;
   }
    if(c==1||c==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}
