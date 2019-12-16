/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll  long long int
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
#define F first
#define S second
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll maxxor(ll a[],ll n)
{
    ll ind=0;
    
    for (ll i = 64 ; i >=0; --i)
    {
        ll maxind=ind;
        ll maxele=mn;
        for (ll j = ind; j < n; ++j)
        {
           if ( (a[j] & (1 << i) ) != 0 && (a[j] > maxele ))
            {maxele=a[j];maxind=j;}
        }
        if(maxele==mn)
            continue;

        swap(a[ind],a[maxind]);
        maxind=ind;

        for (ll j = 0; j < n; ++j)
        {
           if( j != maxind && (a[j] & (1 << i)) !=0 )
            a[j]=a[j]^a[maxind];
        }
        ind++;
    }

    ll res=0;
    for (ll i = 0; i < n; ++i)
    {
       res^=a[i];
    }
    return res;
}


int main()
{
    IOS
    
    #ifndef ONLINE_JUDGE   
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    ll n;
    cin>>n;
    ll a[n];
    rep(i,n)
    cin>>a[i];
    sort(a,a+n);
   cout<<maxxor(a,n)<<endl;
   system ("pause");

    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

