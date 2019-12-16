#include<iostream>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
int n,q,s,i,sum=0;
cin>>n>>q;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
int l[q],r[q];
for(i=0;i<q;i++)
    cin>>l[i]>>r[i];
s=0;
while(s<q)
{
for(i=(l[s]-1);i<=(r[s]-1);i++)
{
sum+=a[i];
}
cout<<sum/(r[s]-l[s]+1)<<endl;
s++;
sum=0;
}
}
