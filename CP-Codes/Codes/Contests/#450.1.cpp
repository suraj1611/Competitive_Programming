#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,l=0,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        if((a[i]<0&&b[i]<=0)||(a[i]<0&&b[i]>=0))
            k++;
        if((a[i]>0&&b[i]>=0)||(a[i]>0&&b[i]<=0))
            l++;
    }
    if(k>1&&l>=k)
        cout<<"No"<<endl;
    else if(l>1&&l<=k)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
}
