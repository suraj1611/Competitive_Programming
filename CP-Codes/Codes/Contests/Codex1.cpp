#include<stdio.h>
#include<iostream>
using namespace std;
/*int sum(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}*/
short int sum(int i) {
  if (i < 10) {
    return i;
  }
  else {
    return i%10 + sum(i/10);
  }
}
int main()
{
 short int t; int n1,n2;
 cin>>t;
 while(t--)
 {
     cin>>n1>>n2;
     int count=0;
     for(int i=n1;i<=n2;i++)
     {
            if(sum(i)%3==0)
                if((i%2)==0)
            count+=i;
     }
     cout<<count<<endl;
 }
}
