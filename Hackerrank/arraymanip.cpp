#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
int main()
{
    ll m,n,x,y,z,i;
    cin>>m>>n;
    vector <int> v(m);
    while(n--)
    {

        cin>>x>>y>>z;
        for(i=x-1;i<y;i++)
        {
            v[i]=v[i]+z;
        }
    }
    sort(v.begin(),v.end());
    cout<<v[m-1];


}
