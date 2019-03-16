#include<bits/stdc++.h>
#include <string>

using namespace std;


#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define pf printf
#define sc scanf
#define maxsize 1100005
#define lb cout<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
/*#define miter map <ll,ll> :: iterator it; for(it=m.begin();it!=m.end();it++)
#define viter vector <ll> :: iterator it; for(it=v.begin();it!=v.end();it++)
#define siter set <ll> :: iterator it; for(it=s.begin();it!=s.end();it++)*/



ll cbits(ll n)
{
    ll c =0;
    while(n)
    {
        n=n&(n-1);
        c++;
    }
    return c;
}


int main()
{
    ll n=1000;
    std::vector<ll> v;
    rep(i,n)
    {
        if(cbits(i)==2)
            v.pb(i);
    }
    IOS
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("in.txt", "r", stdin);
    // for writing output to output.txt
    freopen("out.txt", "w", stdout);
#endif
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a=0,b=0;
        cin>>n;
        rep(i,v.size()-1)
        {
            if(n>=v[i]&&n<v[i+1])
            {
                a=abs(n-v[i]);
                b=abs(n-v[i+1]);
            }
        }
        cout<<min(a,b)<<endl;
    }

}