#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
bool vis[100]={false};
stack <int> s;
vector <int> v[10];

void dfs(int x)
{
    s.push(x);
    while(!s.empty())
    {
        x=s.top();
        s.pop();
        if(!vis[x])
        {
            vis[x]=true;
            //cout<<x<<" ";
        }
        vector <int> :: iterator i;
        for(i=v[x].begin();i!=v[x].end();i++)
        {
            if(!vis[*i])
                s.push(*i);
        }
    }
}
int main()
{
    int n,m,x,y,h,c=0;
    cin>>n>>m;
    rep(i,m)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cin>>h;
    dfs(h);
    rep(i,n)
    {
        if(!vis[i])
            c++;
    }
    cout<<c<<endl;
}
