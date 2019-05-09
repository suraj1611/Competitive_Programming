#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 100000
#define maxsize 1100001
#define pb push_back
#define mp make_pair
#define sc scanf
#define pf printf

static ll ar[maxsize];

void cs (ll srt[], ll a, ll b)
{
    ll r=100005;
    ll n=ar[a+b];
    ll temp[n+5];
    ll f[100005]={0};
    rep(i,n)
        f[srt[i]]++;
    for(int i=1;i<r;i++)
        f[i]+=f[i-1];
    rep(i,r)
    {
        temp[f[srt[i]]-1]=srt[i];
        f[srt[i]]--;
    }
    rep(i,n)
    {
        srt[i]=temp[i];
    }

}
int main()
{
    ar[0]=0;
    ar[1]=1;
    for(int i=2;i<maxsize;i++)
        ar[i]=((((ar[i-1])%md)+(ar[i-2])%md)%md);
    int t,p;
    cin>>t;
    p=t;
    while(t--)
{

    ll a,b,c=0,i;
    cin>>a>>b;
    pf("Case %d:",p-t);
    ll srt[b+1];
    ll j=0;
    for(i=a-1;i<a+b;i++)
    {
        srt[j]=ar[i];
        j++;
    }
    //sort(srt,srt+b+1);
    cs(srt,a,b);
    for(i=0;i<1+b;i++)
        {
            pf(" %d",srt[i]);
            c++;
            if(c>=100)
                break;
        }
    pf("\n");
}

}
