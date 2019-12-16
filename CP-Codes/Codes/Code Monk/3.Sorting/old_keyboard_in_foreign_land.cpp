#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
       cin>>a[i];
    int m=sizeof(a)/sizeof(a+n);
    sort(a, a+m, greater<int>());
    cin>>k;
    int b[k][k];

    for(i=0;i<k;i++)
       {
           cin>>b[i];
           int b[i][k];
       }
    int l=0;
    while(l<n)
    {
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            a[l]=b[j][i];
        }
    }
    l++;
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            cout<<b[j][i]<<endl;
        }
    }



}
