#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)

int main()
{
int t;
cin>>t;
while(t--)
{
    ll n,k,x,sum=0,i,c=0;
    cin>>n>>k;
    priority_queue <ll> pq;
    rep(i,n)
    {
        cin>>x;
        pq.push(x);
    }
    while(!pq.empty())
    {
        x=pq.top();
        c++;
        if(c<=k)
        {
        sum+=x;
        pq.pop();
        pq.push(floor(x/2));
        }
        else
        break;
    }
    cout<<sum<<endl;

}
}
