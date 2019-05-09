#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
while(n!=-1)
{
   int a[n],i,sum=0,avg=0,c=0;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
        sum+=a[i];
   }
   if(sum%n!=0)
   {cout<<-1<<endl;}
   else
   {
       avg=sum/n;
       sort(a,a+n);
      for(i=n-1;i>=0;i--)
      {
          if(a[i]>avg)
            c+=a[i]-avg;
          else
            break;
      }
      cout<<c<<endl;
   }
    cin>>n;
}
}
