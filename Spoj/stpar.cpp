#include<bits/stdc++.h>
#include <string>
#include <stack>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
int main()
{
int n;
cin>>n;
while(n!=0)
{
    int a[n],k=0,i;
    rep(i,n)
    {
        cin>>a[i];
    }
    int p=a[0];
    stack <int> v;
    stack <int> w;
    for( i=1;i<n-1;i++)
    {
        if(a[i]<p)
            v.push(a[i]);
        else
            w.push(a[i]);
    }
    while(!(v.empty()&&w.empty()))
    {
    int c=v.top();
    int d=w.top();
    if((p-c)!=1&&(p-d)!=1)
    {
        k=1;
        break;
    }
    else if((p-c)==1)
    {
        p=c;
        v.pop();
    }
    else if((p-d)==1)
    {
        p=d;
        w.pop();
    }
    }
    if(k==1)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;
cin>>n;
}
}
