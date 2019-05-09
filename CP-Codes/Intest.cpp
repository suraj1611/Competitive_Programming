#include<iostream>
#include<stdio.h>
using namespace std;
int divtest(long int n)
{
    int p,sum=0;
    while(n!=0)
    {
      p=n%10;
      sum+=p;
      n/=10;
    }
    if(sum%3==0)
        return 1;
    else return 0;
}
int main()
{
    int count=0,i;
   long long int n,k;
   cin>>k>>n ;
   long int t[k];
   for(i=0;i<k;i++)
   {
       cin>>t[i];
       if(divtest(t[i])==1)
        count++;
   }
   cout<<count<<endl;
   return 0;
}
