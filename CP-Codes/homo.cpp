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

vector <ll> v;
set <ll> s;

void reset()
{
    s.clear();
    vector <ll> :: iterator it;
    for(it=v.begin();it!=v.end();it++)
        s.insert(*it);
}

void del (ll x)
{
    vector <ll> :: iterator it;
    for(it=v.begin();it!=v.end();it++)
        if(*it==x)
    {v.erase(it);
    break;}

}

int main()
{
    ll n,c=0,sz;
    sc("%lld",&n);
    char str[10];
    rep(i,n)
    {
        ll x;
        sc("%s",&str);
        sc("%lld",&x);
        if(strcmp(str,"insert")==0)
        {
            v.pb(x);
            sz=s.size();
            s.insert(x);
            if(s.size()-sz==1)
                c++;
        }
        else
        {
            del(x);
            reset();
        }

        if(v.empty()|| v.size()==1)
            pf("%s\n","neither");
        else if(v.size()==s.size()&& v.size()!=1)
            pf("%s\n","hetero");
        else if(s.size()==1&&v.size()!=1)
            pf("%s\n","homo");
        else
            pf("%s\n","both");

    }
}
