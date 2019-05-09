#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define sc scanf
#define pf printf



int main()
{
    ll homo=0,het=0;
    int t;
    sc("%d",&t);
    map <ll,ll> m;
    while(t--)
    {
        ll x;
        char s[10];
        sc("%s%lld",s,&x);
        if(strcmp(s,"insert")==0)
        {
            m[x]++;
            if(m[x]==2)
                homo++;
            else if(m[x]==1)
                het++;
        }
        else
        {
            m[x]--;
            if(m[x]>0)
            {
            if(m[x]==1)
                homo--;
            else if(m[x]==0)
                het--;
            }
        }
        if(homo>=1&&het>=2)
            pf("both\n");
        else if(homo>=1)
            pf("homo\n");
        else if(het>=2)
            pf("hetero\n");
        else
            pf("neither\n");
    }
}
