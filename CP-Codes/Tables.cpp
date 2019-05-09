#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s,sum=0,c=0,i;
    cin>>n>>k>>s;
    int a[n];
    int p=k*s;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        if(p<=sum)
        break;
        else
        {
        sum+=a[i];
        c++;
        }
    }
    cout<<c<<endl;
}
