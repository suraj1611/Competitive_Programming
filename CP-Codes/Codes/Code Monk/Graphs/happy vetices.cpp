#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007

vector <int> ar[100005];
int ch[100005]={0};

void dfs(int s,int c)
{
    ch[s]=c;
    for(int i=0;i<ar[s].size();i++)
    {
    if(ch[ar[s][i]]==0)
        ar


}
int main()
{
    int n,m;
    cin>>n>>m;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        ar[x].push_back(y);
        ar[y].push_back(x);
    }

}
