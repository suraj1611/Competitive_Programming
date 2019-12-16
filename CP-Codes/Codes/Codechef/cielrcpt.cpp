#include<stdio.h>
#include<iostream>
using namespace std;
int rev(int n)
{
   int  rev=0;
    while(n!=0)
    {
        rev=rev*10+(n%10);
        n/=10;

    }
    return rev;
}
int main()
{
    short int t;int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<(rev(n))<<endl;
    }
    return 0;
}
