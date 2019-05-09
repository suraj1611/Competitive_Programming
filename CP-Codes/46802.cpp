#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int p=n/2;
    if((a<=p&&b>p)||(a>p&&b<=p))
        cout<<"Final!"<<endl;
    else if((a<=p&&b<=p)||(a>p&&b>p))
        cout<<(int)(log(p)/log(2))<<endl;
}
