#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define sc scanf
#define pf printf


int main()
{
    ll n,x,i,k,temp;
    cin>>n>>k;
    ll t=n;
    ll a[n+5];
    a[0]=-1;
    map  <ll,ll>  m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        m[a[i]]=i;
    }

    i=1;
   /* while(k--)
    {
        temp=a[m[n]];
        a[m[n]]=a[i];
        a[i]=temp;
        n--;i++;
    }*/

    while(i < n && k--)
    {
        if(a[i] == n-i+1)
        {
            i ++;
            continue;
        }

        temp = m[n-i+1];
        m[ a[i] ] =  m[ n-i+1 ];
        m[ n-i+1 ] = i;
        swap( a[ temp ], a[i] );


        i ++;
    }


    for(i=1;i<=t;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

