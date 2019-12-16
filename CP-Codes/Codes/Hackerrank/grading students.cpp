#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    if(a[i]<38)
    {
        cout<<a[i]<<endl;
        continue;
    }
    if(a[i]%5==4)
    {
        a[i]+=1;
    }
    if(a[i]%5==3)
        a[i]+=2;
        cout<<a[i]<<endl;
    }
}
