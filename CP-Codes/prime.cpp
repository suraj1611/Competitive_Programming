#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int check(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {if(n%i==0)
    return 0;}
    if(n!=1)
    return 1;
    else return 0;
}
int main()
{
    int t,n1,n2;
    cin>>t;
    while(t--)
    {
        cin>>n1>>n2;
        while(n1<=n2)
        {
    if(check(n1))
        cout<<n1<<"\n";
        n1++;
    }}
return 0;
}
