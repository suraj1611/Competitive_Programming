#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    short int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<(a%b)<<endl;
    }
    return 0;
}

