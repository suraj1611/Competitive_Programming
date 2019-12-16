#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int t,b,k,count=0;float a;
    long int y;
    cin>>t;
    while(t--)
    {
        cin>>y;
        for(b=1;b<=700;b++)
        {
            k=y-b;
            if(k<0)
                break;
            a=sqrt(k);
            count+=(int)trunc(a);
        }
        cout<<count<<endl;
    }
    return 0;
}
