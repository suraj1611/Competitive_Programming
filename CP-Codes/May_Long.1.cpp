#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int main()
{
bool prime[50001];
memset(prime, true, sizeof(prime));
int t;
cin>>t;
while(t--)
{
    int n,i,j,c=0,k=0,q,r;
    cin>>n;
    int a[n];
    set <int> s;
    rep(i,n)
    {cin>>a[i];}
    sort(a,a+n);
    for (i=0;i<n;i++)
    {
        q=a[i];
        r=a[n-1];
        if(q==1)
        {
            cout<<0<<endl;
            return 0;
        }
        if (prime[q] == true)
        {
            s.insert(q);
            for (int j=q*2; j<=r; j += q)
               {
                prime[j] = false;
               }
        }
    }
    rep(i,n)
    if(prime[a[i]]==true)
        c++;
    int ans=n-c;
    if(c==1||s.size()==1)
    cout<<-1<<endl;
    else
    cout<<ans<<endl;
}
return 0;
}
