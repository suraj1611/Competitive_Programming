#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,sum=0,c=1,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int p=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        c++;
        else
        {
            sum+=(c-1);
            c=1;
        }
    }
    cout<<sum<<endl;
}
}
