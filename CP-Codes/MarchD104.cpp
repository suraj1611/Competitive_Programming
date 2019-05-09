#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,i;
    int s,sum=0;
    cin>>n>>s;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int p=sum/s;
    double q=(double)sum/s;
    if(sum%s==0)
        cout<<p+1<<endl;
    else
        cout<<ceil(q)<<endl;
}
}
