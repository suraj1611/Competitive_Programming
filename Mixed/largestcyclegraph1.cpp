/*Intern lgaa
aage aurr mehnat krna h
*/
#include <bits/stdc++.h>
#define ll long long int
#define si1(a) scanf("%d",&a)
#define si2(a,b) scanf("%d%d",&a,&b)
#define si3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sil1(a) scanf("%lld",&a)
#define sil2(a,b) scanf("%lld%lld",&a,&b)
#define sil3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MOD 720720
#define pb push_back
#define mp make_pair
#define pi1(a) printf("%d\n",a)
#define pi2(a,b) printf("%d%d",a,b)
#define pi3(a,b,c) printf("%d%d%d",a,b,c)
#define pil1(a) printf("%lld\n",a)
#define pil2(a,b) printf("%lld %lld\n",a,b)
#define pil3(a,b,c) printf("%lld%lld%lld",a,b,c)
#define dd double
 
 
using namespace std;
ll n,m;
vector<ll>v[100005];
ll vis[100005];
void dfs(ll x)
{
    vis[x]=1;
    m=x;
    cout<<"x= "<<x<<" "<<"m= "<<m<<endl;
    ll i;
    for(i=0;i<v[x].size();i++){
        if(!vis[v[x][i]]){
            dfs(v[x][i]);
        }
    }
    
}
int main()
{
    #ifndef ONLINE_JUDGE   
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    ll i,j,k,a,b;
    sil1(n);
    for(i=1;i<n;i++){
        sil2(a,b);
        v[a].pb(b);
        v[b].pb(a);
    }
    m=1;
    dfs(1);
    a=m;
    memset(vis,0,sizeof(vis));
    dfs(m);
    pil2(a,m);
    return 0;
}