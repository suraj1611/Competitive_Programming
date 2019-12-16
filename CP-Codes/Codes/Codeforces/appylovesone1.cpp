/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
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
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

ll max1(string s)
{
	ll p=0,q=0,maxm=mn;
	rep(i,s.length())
	{
		if(s[i]=='1')
		{
			q++;
		}
		else
		{
			p=i;
			q=i;
		}
		if(abs(p-q)>maxm)
			maxm=abs(p-q);
	}
	return maxm;
}

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,q,k;
	cin>>n>>q>>k;
	string qr;
	ll a[n];
	rep(i,n)
	{
		cin>>a[i];
	}
	//cout<<s<<endl;
	
	ll c=0;
	ll l[n]={0},r[n]={0},lmax[n]={0},rmax[n]={0};

	ll zc=0;

	if(a[0]==0)
		{l[0]=0;lmax[0]=0;zc=1;}
	else
		{l[0]=1;lmax[0]=1;c++;}

	for (int i = 1; i < n; ++i)
	{
		if(a[i]==1 && zc==0)
			{
				l[i]=l[i-1]+1;		
			}

		else

			{
				l[i]=l[i-1];
				zc=1;	
			}
	}

	for (int i = 1; i < n; ++i)
	{
		if(a[i]==1)
			{
				c++;
				lmax[i]=max(lmax[i-1],c);
			}
		else
			{
				c=0;
				lmax[i]=lmax[i-1];
			}
	}

	c=0;zc=0;

	if(a[n-1]==0)
		{r[n-1]=0;rmax[n-1]=0;zc=1;}
	else
		{r[n-1]=1;rmax[n-1]=1;c++;}

	for (int i = n-2; i >=0 ; i--)
	{
		if(a[i]==1 && zc==0)
			{
				r[i]=r[i+1]+1;			
			}
		else
			{
				r[i]=r[i+1];
				zc=1;
			}
	}

	

	for (int i = n-2; i >=0 ; i--)
	{
		if(a[i]==1)
			{
				c++;
				rmax[i]=max(rmax[i+1],c);
			}
		else
			{
				c=0;
				rmax[i]=rmax[i+1];
			}
	}

	cin>>qr;
	c=0;

	rep(i,q)
	{
		if(qr[i]=='!')
		{
			c=(c+1)%n;
		}

		else if(qr[i]=='?'&&c==0)
		{
			cout<<min(k,max(lmax[n-c-1],rmax[n-c-1]))<<endl;

		}

		else
		{
			
			cout<<min(max(lmax[n-c-1],max(rmax[n-c],l[n-c-1]+r[n-c])),k)<<endl;
		}
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

