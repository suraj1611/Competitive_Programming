#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
float dist(int x1,int y1,int x2,int y2)
{
    return(sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))));
}
int main()
{
    int t,r,a[6],i;
    float m,n,o;
    cin>>t;
    while(t--)
    {
        cin>>r;
        for(i=0;i<6;i++)
            cin>>a[i];
             m=dist(a[0],a[1],a[2],a[3]);
            n=dist(a[2],a[3],a[4],a[5]);
            o=dist(a[0],a[1],a[4],a[5]);
        if((m<=r||(n<=r&&o<=r))&&((n<=r)||(m<=r&&o<=r))&&((o<=r)||(m<=r&&n<=r)))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
        return 0;
}
