#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep(j,m) for(int j=0; j<m; j++)
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
	    ll n,m;
	    cin>>n>>m;
	    ll a[n][m];
	    rep(i,n)
	    {
	        rep(j,m)
	        cin>>a[i][j];
	    }
	ll k;
	cin>>k;
	ll q=min(n,m);
	ll c1,c2,c3,s;
	c1=c2=c3=s=0;
	ll c=1;
	for (int subRow = n; subRow >= 1; subRow--) {
        int rowLimit = n - subRow + 1;
        for (int subCol = m; subCol >= 1; subCol--) {
            int colLimit = m - subCol + 1;
            for (int startRow = 0; startRow < rowLimit; startRow++) {
                for (int startCol = 0; startCol < colLimit; startCol++) {

                    for (int i = 0; i < subRow; i++) {
                        for (int j = 0; j < subCol; j++) {
                            s+=a[i + startRow][j + startCol];
                        }

                    }
if(s>k)
                c1++;
            if(s<k)
                c2++;
            else
                c3++;

        }

                }

            }
        }

    cout<<c1<<" "<<c2<<" "<<c3<<endl;
    ll  ans=pow((c1+c2),2)+(2*c3*c2)+(2*c1*c3)+pow(c3,2);
    cout<<ans<<endl;
}
