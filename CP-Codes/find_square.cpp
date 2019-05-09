/* Code by : Suraj (@suraj1611) */

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
#define F first
#define S second
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
/*#define miter map <ll,ll> :: iterator it; for(it=m.begin();it!=m.end();it++)
#define viter vector <ll> :: iterator it; for(it=v.begin();it!=v.end();it++)
#define siter set <ll> :: iterator it; for(it=s.begin();it!=s.end();it++)*/

ll prime[maxsize];



ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else
	return(gcd(b%a,a));
}

ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}

void seive()
{
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=true;
	for(ll i=2;i*i<=maxsize;i++)
	{
		if(prime[i]==true)
		{
		     for(ll j=2*i;j<maxsize;j+=i)
			{
			prime[j]=false;
			}
		}
	}
}

int bs(ll a[],ll x,ll n)
{
    ll l=0,h=n-1,mid;
    while(l<=h)
    {
    mid=(l+h)/2;
    if(x<a[mid])
        h=mid-1;
    else if(x>a[mid])
        l=mid+1;
    else
        return 1;
    }
    return 0;
}

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("in.txt", "r", stdin);
    // for writing output to output.txt
    freopen("out.txt", "w", stdout);
#endif
	ll n,m;
	cin>>n>>m;
	char a[n][m];
	double c=0,k=0,k1=0,row=0,start=0;
	rep(i,n)
	{
		rep(j,m)
		{
			cin>>a[i][j];
		}
	}
	rep(i,n)
	{
		rep(j,m)
		{
			if(a[i][j]=='B')
				{c++;k1=1;}
		}
		if(k1==1)
		{
			break;
		}
	}
	//cout<<c<<endl;
	rep(i,n)
	{
		rep(j,m)
		{
			if(a[i][j]=='B')
			{
				k=1;
				row=i;
				start=j;
				if(k==1)
					break;
			}
		}
		if(k==1)
			break;	
	}
	//cout<<start<<" "<<row<<endl;
	double rw=(row+c)-floor(c/2);
	ll col=(start+c)-floor(c/2);
	cout<<rw<<" "<<col<<endl;
	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
    return 0;
}

