#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int x,y;
    cin>>x>>y;
    if(y==0)
        cout<<"No"<<endl;
    else if(y==1&&x==0)
        cout<<"Yes"<<endl;
    else if(y==1&&x>0)
        cout<<"No"<<endl;
    else if((x-y+1)%2==0&&(x-y+1)>0)
       {cout<<"Yes"<<endl;}
    else
        cout<<"No"<<endl;
}
