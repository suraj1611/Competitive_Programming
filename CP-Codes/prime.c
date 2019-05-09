#include <stdio.h>
#include <math.h>
int check(int n)
{
    for(int i=2;i<sqrt(n);i++)
    {if(n%i==0)
    return 0;}
    else return 1;
}
int main()
{
    int t,n1,n2;
    cin>>t>>n1>>n2;
    while((t--)&&(n1<=n2))
    {if(check(n1))
        cout<<n1;
        n1++;
    }
return 0;
}
