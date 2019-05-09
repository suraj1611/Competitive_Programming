#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair

int main()
{
int t;
cin>>t;
while(t--)
{
    ll n,i,s=0;
    cin>>n;
    ll a[n],b[n];
    rep(i,n)
    {
        cin>>b[i];
        if(i!=0)
        a[i]=a[i-1]+b[i];
        else
        a[i]=b[i];
    }
    ll ord[3];
    //cout<<s<<endl;
    for(i=0;i<n;i+=2)
    {
        if(i==0)
            s+=a[i];
        else
            s+=a[i]-a[i-1];

    }
    ord[0]=s;
    //cout<<s<<"1"<<endl;
    s=0;
    for(i=1;i<n;i+=4)
    {
        if(i==1)
            s+=a[i];
        else
            s+=a[i]-a[i-2];
    }
   ord[1]=s;
   //cout<<s<<"2"<<endl;
    s=0;
    for(i=2;i<n;i+=6)
    {
        if(i==2)
            s+=a[i];
        else
            s+=a[i]-a[i-3];
    }
    ord[2]=s;
    //cout<<s<<"3"<<endl;
    sort(ord,ord+3);
    cout<<ord[2]<<endl;

}
}
