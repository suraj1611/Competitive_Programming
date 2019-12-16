#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=(10000007);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x;
        cin>>a>>b;
        x= (( a % c ) * ( b % c ));
        cout<<( x%c)<<endl;

    }
}
