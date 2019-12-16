#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b;
    cin>>a>>b;
    while(true)
    {

    if(a==0||b==0)
       {cout<<a<<" "<<b<<endl;return 0;}
    else if(a>=2*b)
        {a%=2*b;}
    else if(b>=2*a)
        {b%=2*a;}
        else
               {cout<<a<<" "<<b<<endl;return 0;}

    }
}
