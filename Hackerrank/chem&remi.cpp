#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int max=(a>b?a:b);
        cout<<max<<" "<<(a+b)<<endl;
    }
return 0;
}

