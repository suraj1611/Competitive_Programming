#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,B=0,C=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]>0)
        B+=a[i];
    else
        C+=a[i];
}
    cout<<B-C<<endl;
}