#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define sc scanf
#define pf printf

ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else
	return(gcd(b%a,a));
}

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
        ll n,k;
        cin>>n>>k;
        for (int i = 0; i < (1<<n); i++)
        {
            for (int j = 0; j < n; j++)
                if ((i & (1 << j)) > 0)


        }

	}

}
