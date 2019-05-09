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
    int n,m;
    cin>>n>>m;
    int k;
    cin>>k;
    while(k--)
    {
        int r[2],c1[2],c2[2];
        cin>>r[0]>>r[1];
        cin>>c1[0]>>c1[1];
        cin>>c2[0]>>c2[1];
        if((c1[0]-r[0]==1&&c1[1]-r[1]==1&&r[0]-c2[0]==1&&r[1]-c2[1]==1)||(c2[0]-r[0]==1&&c2[1]-r[1]==1&&r[0]-c1[0]==1&&r[1]-c1[1]==1))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
}
}
