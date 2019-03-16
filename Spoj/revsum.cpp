#include <stdio.h>
#include <iostream>
using namespace std;
int rev(int n)
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
int N,a,b,sum=0;
cin>>N;
while (N--)
{
    cin>>a>>b;
    sum=(rev(a)+rev(b));
    cout<<rev(sum)<<"\n";
}
return 0;
}
