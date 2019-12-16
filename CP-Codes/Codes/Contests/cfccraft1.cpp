#include<bits/stdc++.h>
using namespace std;
int issq(int n)
{
    float f=sqrt(n);
    if(f*f==n)
        return 0;
    else
        return 1;
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m = sizeof(a)/sizeof(a[0]);
    sort(a, a+m);
    for(i=n-1;i>=0;i--)
    {
        if(issq(a[i]))
        {
            cout<<a[i]<<endl;
            break;
        }
    }
}
