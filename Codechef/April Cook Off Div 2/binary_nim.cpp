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
	    ll n,j,z=0,o=0;
	    cin>>n;
	    string str;
	    cin>>str;
	    stack <char> s[n];
	    rep(i,n)
	    {
	        string x;
	        cin>>x;
	        rep(i,n)
	        {
                    if(x[0]=='0')
                    {
                        for(j=0;j<x.length();j++)
                        {
                            if(x[j]=='0')
                             z++;
                        }
                    }
                    else
                       {
                           for(j=0;j<x.length();j++)
                        {
                            if(x[j]=='1')
                             o++;
                        }
                       }
                }
	        }
        if(z==o)
        {if(str.compare("Dee")==0)
            cout<<"Dum"<<endl;
        else
            cout<<"Dee"<<endl;
        }

        else if(o>z)
            cout<<"Dum"<<endl;
        else
            cout<<"Dee"<<endl;

	}

}
