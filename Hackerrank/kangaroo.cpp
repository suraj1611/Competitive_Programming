#include<bits/stdc++.h>
using namespace std;
int main()
{
    short int x1,x2,v1,v2,a=0,b=0;
    cin>>x1>>v1>>x2>>v2;

        if(v1<=v2)
            cout<<"NO"<<endl;
        else if(((x2-x1)%(v1-v2))==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
}
