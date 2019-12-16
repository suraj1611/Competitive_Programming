#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,a[4];
        for(i=0;i<4;i++)
            cin>>a[i];
        int m=sizeof(a)/sizeof(a[0]);
        sort(a,a+m);
        if((a[0]==a[1])&&(a[2]==a[3]))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
