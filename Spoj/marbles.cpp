#include <stdio.h>
#include <iostream>
using namespace std;
signed long int fact(int n)
    {
        int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
    }
int main()
{
    int T,n,k;
    cin>>T;
    while(T--)
    {
        cin>>n>>k;
        cout<<(signed long int)(fact(n-1)/((fact(n-k)*fact(k-1))))<<endl;
    }
}
