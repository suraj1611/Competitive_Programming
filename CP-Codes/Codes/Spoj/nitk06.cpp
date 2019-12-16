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
#define sc scanf
#define pf printf


int main()
{
int t;
cin>>t;
while(t--)
{
    stack <int> s;
    int n;cin>>n;
    int a[n],k=0,i;

    rep(i,n)
    {
        cin>>a[i];
    }
    for(i=n-1;i>=0;i--)
        s.push(a[i]);

    i=0;
    while(i<n-1&&!s.empty())
    {
        int x,y;
        x=s.top();
        //cout<<x<<endl;
        s.pop();
        y=s.top();
        //cout<<y<<endl;
        s.pop();
        x--;y--;
        if(x!=0&&y==0)
        {
            k=1;
            break;
        }
        else if(x==0&&y!=0&&i!=n-2)
        {
            s.push(y);
        }
        else if(x!=0&&y!=0)
        {
            s.push(y);
            s.push(x);
        }
        else if(x==0&&y==0)
        {
            continue;
        }
         else if(x==0&&y!=0&&i==n-2)
        {
            k=1;
        }
    }
    if(k==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
}
