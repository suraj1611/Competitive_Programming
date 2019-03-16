#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,i,j,k=2;
    cin>>n;
    int a[n];
    rep(i,n)
    cin>>a[i];
    sort(a,a+n);
    set <int> s;
    rep(i,n)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]%a[i]==0)
                {continue;}
            else
                k=1;
        }
        if(k==1||k==0)
            s.insert(a[i]);
        k=0;
    }
    int sz=s.size();
    int ans=n-sz;
    if(ans<=1)
    cout<<-1<<endl;
    else
    cout<<ans<<endl;

}
return 0;
}
