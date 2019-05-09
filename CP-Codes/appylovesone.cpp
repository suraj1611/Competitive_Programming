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

ll s1,e1,s2,e2,len;
string s;

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

void max1()
{
	ll c=1,t1=0,t2=0;
	//cout<<s<<endl;
	rep(i,s.length())
	{
		if(s[i]=='1'&&c==1)
		{
			s1=i;
			c++;
		}
		if(s[i]=='1')
		{
			//q++;
			e1=i;
		}
		else
		{
			
		cout<<s1<<" "<<e1<<endl;

		if(abs(e1-s1+1)<abs(t2-t1+1))
			{
				s1=t1;
				e1=t2;
			}

		t1=s1;
			t2=e1;
			c=1;

		}
		
	}
		


	
	for (int i = s1; i <=e1 ; ++i)
	{
		s[i]='2';
		//cout<<s<<endl;
	}
}

void max2()
{
	ll c=1,t1=0,t2=0;
	rep(i,s.length())
	{
		//cout<<s<<endl;
		if(s[i]=='1'&&c==1)
		{
			s2=i;
			c++;
		}
		if(s[i]=='1')
		{
			//q++;
			e2=i;
		}
		else if(s[i]!='2')
		{
			
		//cout<<s2<<" "<<e2<<endl;
		if(abs(e2-s2+1)<abs(t2-t1+1))
			{
				s2=t1;
				e2=t2;
			}
			t1=s2;
			t2=e2;
			c=1;
		}
	}
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
	rep(i,n)
	{
		ll x;
		cin>>x;
		if(x==1)
		s+="1";
		else
		s+="0";
	}
	cin>>qr;
	max1();
	max2();
	//cout<<s1<<" "<<e1<< " "<<s2<<" "<<e2<<endl;
	//cout<<s<<endl;

	rep(i,q)
	{
		if(qr[i]=='!')
		{
			s1=(s1+1)%n;
			e1=(e1+1)%n;
			s2=(s2+1)%n;
			e2=(e2+1)%n;
		}
		else
		{
			ll kmax=0;

			cout<<"s1-e1 "<<s1<<" "<<e1<<endl;
			cout<<"s2-e2 "<<s2<<" "<<e2<<endl;
			if(s1<=e1&&s2<=e2&&(s2-e1==1))
				{
					kmax=(e1-s1+1+e2-s2+1);
				}
			else if(s1<=e1&&s2<=e2)
				{
					kmax=max(e1-s1+1,e2-s2+1);
				}
			else if(s1<e1)
				{
					kmax=e1-s1+1;
					if(s1-e2==1)
						kmax++;
				}
			else if(s2<e2)
				{
					kmax=e2-s2+1;
					if(s2-e1==1)
						kmax++;
				}
			cout<<min(k,kmax)<<endl;

		}
	}

	

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

