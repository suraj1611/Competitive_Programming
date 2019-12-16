/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define maxsize 1100005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll bit[20][maxn], p[maxn];
ll n;
 
void upd(ll idx, ll x, ll t){
  for(; idx <= n; idx += idx&-idx){
    bit[t][idx] += x;
  }
}
 
ll query(ll idx, ll t){
  ll s = 0;
  for(; idx > 0; idx -= idx&-idx){
    s += bit[t][idx];
  }
  return s;
}
 
ll qtd(ll x){
  set<ll> aux;
  while(x){
    aux.insert(x%10ll);
    x/=10ll;
  }
  return aux.size();
}
  
 
 
 
int main(){
  cin.sync_with_stdio(0), cin.tie(0);
  //~ freopen("in", "r",stdin);
  //~ freopen("out", "w",stdout);
  
  cin>>n;
  for(ll i = 1 ; i <= n; i++){
    cin>>p[i];
    upd(i, 1, qtd(p[i]));
  }
  
  ll q;
  cin>>q;
  
  while(q--){
    ll op, l, r, c, u, v;
    cin>>op;
    if(op <= 1){
      cin>>u>>v;
      ll d1 = qtd(p[u]);
   
      if(op) p[u] = v;
      else p[u] += v;
      
      ll d2 = qtd(p[u]);
      
      upd(u, -1, d1);
      upd(u, 1, d2);
      
    }else{
      cin>>l>>r>>c;
      cout<<query(r, c) - query(l-1, c)<<endl;
    }
  }
}