#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
vector <bool> vis(false);
stack <int> s;
vector <int> v[10];

void dfs(int s)
{
    s.push(s);
    while(!s.empty())
    {
        s=s.top();
        s.pop();
        if(!vis[s])
        {
            vis[s]=true;
            cout<<s<<" ";
        }
        vector <int> :: iterator i;
        for(int i=v.begin();i!=v.end();i++)
        {
            if(!vis[*i])
                s.push(*i);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;

}
