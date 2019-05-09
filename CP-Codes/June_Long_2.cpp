#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
string lcs(ll n,string s,vector <string> v)
{
    ll l=s.length();
    string a,b;
    set <string> st;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<n;j++)
        {
            st.clear();
            a=s.substr(0,i+1);
            b=v[j].substr(0,i+1);
            if(a.compare(b)==0)
            {
                st.insert(v[j]);
            }
            else
            {
                break;st.clear();
            }
        }
    }
    set <string> :: iterator it;
    it=st.begin();
    return *it;
}
int main()
{
    ll n,t;
    cin>>n;
    string s,str;
    vector <string> v;
    //vector < pair <int , string > > v;
    rep(i,n)
    {
        cin>>s;
        v.push_back(s);
    }
    ll r;
    cin>>r;
    rep(i,r)
    {
        cin>>t>>str;
        //v.push_back(make_pair(t,s));
       cout<<lcs(t,str,v)<<endl;
    }
}
