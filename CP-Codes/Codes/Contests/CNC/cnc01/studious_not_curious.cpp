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


int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	    ll n,i;
	    cin>>n;
	    ll a[n+5],b[n+5];
	    rep(i,n)
	    cin>>a[i];
	    rep(i,n)
        cin>>b[i];
        for(i=0;i<n-1;i++)
        {
            if(a[i]==b[i])
                continue;
            else
            {
                int x,y,z;
                x=a[i]-b[i];
                y=a[i+1]-b[i+1];
                z=min(x,y);
                a[i]-=z;
                a[i+1]-=z;
            }
        }
        int k=0;
        rep(i,n)
        if(a[i]!=b[i])
            {k=1;break;}

        if(k==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

	}

}
