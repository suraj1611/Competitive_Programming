#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int palin(int n)
{
    int p,rev=0;
    while(n!=0)
{
     p=n%10;
    rev=rev*10+p;
    n=n/10;
}
return rev;
}
int main()
{
 int t,n,i,m[10000];
 cin>>t;
 for(i=0;i<t;i++)
    cin>>m[i];
 i=0;
 while(t--)
 {
     n=m[i];
     while(++n!=(palin(n))){}
     cout<<n--<<" ";i++;
 }
 return 0;
}
