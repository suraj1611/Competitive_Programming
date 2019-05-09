#include<iostream>
#include<cmath>
using namespace std;
int max(int a[],int n)
{
    int index,max,i;
    max=a[0];
    for(i=1;i<n;i++)
    {if(a[i]>max)
        index=i;}
    return index;
}
int main()
{
int n,k,i;
cin>>n;
int s[n],t[n],lead[n];
for(i=0;i<n;i++)
{
    cin>>s[i]>>t[i];
    lead[i]=abs(s[i]-t[i]);
}
k=max(lead,n);
if((s[k]-t[k])>0)
    cout<<1;
else cout<<2;
cout<<" "<<lead[k];
return 0;
}
