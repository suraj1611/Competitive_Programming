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

bool pal[maxsize];

int ispalin(ll n)
{
    ll t=n;
    ll rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    if(rev==t)
        return 1;
    else
        return 0;
}

void prec()
{
    for(ll i=0;i<maxsize;i++)
    {
        if(ispalin(i))
            pal[i]=true;
        else
            pal[i]=false;
    }
}

int main()
{
	IOS
	prec();
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    while(true)
        {
	    if(pal[n])
            {cout<<n<<endl;break;}
        else
        {
            n--;
        }
        }
    }

}


