#include<bits/stdc++.h>
using namespace std;
int div(int n)
{
    int c=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
           c+=2;
        }
    }
    return c;
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    a[0]=1;a[1]=2;
    for(i=2;i<n+2;i++)
    {
        a[i]=a[i-1]+(div(i+1)/2);
    }
    if(n==1)
        cout<<1<<endl;
    else if(n==2)
        cout<<2<<endl;
    else
    {
    cout<<a[n-1]<<endl;
    }
}
