#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007

vector <int> ar[1001];
int len[1001]={0};

void dfs(int s,int l)
{
    len[s]=l;
    rep(i,ar[s].size())
    {
        if(len[ar[s][i]]==0)
            dfs(ar[s][i],l+1);
    }
}

int main()
{
    int n,m,x,y,l=1,q,ans,num;
    cin>>n;
    rep(i,n-1)
    {
        cin>>x>>y;
        ar[x].push_back(y);
        ar[y].push_back(x);
    }
    dfs(1,l);
    cin>>q;
    int mindis=mx;
    while(q--)
    {
        cin>>num;
        if(mindis>len[num])
        {
            mindis=len[num];
            ans=num;
        }

    }
    cout<<ans<<endl;


return 0;
}
