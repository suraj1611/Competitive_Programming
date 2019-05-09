#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
vector< ull> adj[100009];
ull visited[100009]={0};
double d[100009]={0};


double dfs(ull v){
	d[v] = 0;
	visited[v]=1;
	double ans =0;
	ull cnt=0;
    cout<<"cnt1="<<cnt<<endl;
        for(ull i=0;i<adj[v].size();i++)
        {
            if(visited[adj[v][i]]==0)
            {
                ans = ans + dfs(adj[v][i]);
                visited[adj[v][i]]=1;
                cnt++;
                cout<<"cnt2="<<cnt<<endl;
                cout<<"ans="<<ans<<endl;

            }
        }
        if(ans>0)
        d[v] = (double)ans/cnt + 1;
        else if(cnt==0)
            d[v] = 0;
        else
            d[v]=1;
        cout<<"ans="<<ans<<" "<<"cnt3="<<cnt<<endl;
        cout<<"dv="<<d[v]<<endl;
        return d[v];


}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie (NULL); cout.tie (NULL);

    #ifndef ONLINE_JUDGE   
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
        
    ull n,x,y,i;
    cin>>n;
    if(n==1)
    {cout<<"0.000000000000000\n";
    return 0;
    }
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    //cout<<sum<<"\n";
    double ans = dfs(1);
    std::cout << std::fixed;
    std::cout << std::setprecision(15)<<ans<<"\n";

    return 0;
}