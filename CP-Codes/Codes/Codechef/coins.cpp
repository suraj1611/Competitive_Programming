#include<iostream>
#include<stdio.h>
#include<math.h>
#include <fstream>
using namespace std;
int main()
{
    int n,i,t,a[3];
    while (scanf("%lld",&n)!=EOF)
    {
    cin>>n;int count=0;
    for(i=0;i<3;i++)
    {
        a[i]=floor(n/(i+2));
        count+=a[i];
    }
    if(count<n)
    cout<<n<<endl;
    else
    cout<<count<<endl;
}}
