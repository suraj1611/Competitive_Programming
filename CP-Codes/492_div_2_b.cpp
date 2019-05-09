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
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	IOS
	ll n,i;
	cin>>n;
	ll c=0;
    ll a[n],d[n];
    rep(i,n)
    {
        cin>>a[i];
        d[i]=a[i];
    }
    sort(d,d+n);
    ll k=0;
    for(i=0;;i=i)
    {
        if(a[i]-c<=0)
            break;
        if(d[k]==0)
        {
            k++;
            continue;
        }
        i+=d[k]-c;
        c+=d[k]-c;
        if(i>n-1)
        {
            i=(i%(n-1))-1;
        }
        else if(i==n-1)
            i=0;
        k++;
    }
    cout<<i+1<<endl;
}

