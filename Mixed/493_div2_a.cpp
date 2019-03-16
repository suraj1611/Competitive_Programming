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
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
/*#define miter map <ll,ll> :: iterator it; for(it=m.begin();it!=m.end();it++)
#define viter vector <ll> :: iterator it; for(it=v.begin();it!=v.end();it++)
#define siter set <ll> :: iterator it; for(it=s.begin();it!=s.end();it++)*/

int main()
{
	IOS
	ll n;
	cin>>n;
	pair <ll,ll> m[n];
	ll a[n];
	ll s=0,s1=0,s2=0,i;
	rep(i,n)
	{
	    cin>>a[i];
	    s+=a[i];
	    m[i]=mp(a[i],i+1);
	}
    sort(m,m+n);
    s1=m[0].first;
    s2=s-s1;
    if(s1!=s2&&s1>0&&s2>0)
    {
       cout<<n-1<<endl;
       for(i=1;i<n;i++)
       {
           cout<<m[i].second<<" ";
       }
       cout<<endl;
    }
    else
    cout<<-1<<endl;
}
