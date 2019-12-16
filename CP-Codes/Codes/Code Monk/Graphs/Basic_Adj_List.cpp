#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
int main()
{
    ll n,e,x,y;
    cin>>n>>e;
    vector <ll> adj[10];
    rep(i,e)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {

                cout << adj[i][j] << " --> ";
        }
        cout<<endl;
    }
return 0;
}
