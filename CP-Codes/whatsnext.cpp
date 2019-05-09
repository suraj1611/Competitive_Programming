#include<bits/stdc++.h>
using namespace std;
int main()
{
while(true)
{
    float a,b,c;
    cin>>a>>b>>c;
    if(a==0&&b==0&&c==0)
        break;
    if((b-a)==(c-b))
    cout<<"AP "<<c+(b-a)<<endl;
    else if((b/a)==(c/b))
    cout<<"GP "<<c*(b/a)<<endl;
}}
