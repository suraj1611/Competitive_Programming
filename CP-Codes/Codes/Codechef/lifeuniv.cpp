#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    short int n;
    while(true)
    {
    cin>>n;
    if(n==42)
    break;
    else
    {cout<<n<<endl;
    continue;}
    }
    return 0;
}
