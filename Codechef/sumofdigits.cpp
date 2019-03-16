#include<stdio.h>
#include<iostream>
using namespace std;
int sum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
int main()
{
    short int t;int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<sum(n)<<endl;
    }
    return 0;
}
