#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    return ((n)*(n+1))/2;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int p=abs(a-b);
    int k=p/2;
    if(p%2==0)
        cout<<sum(k)*2<<endl;
    else
        cout<<(sum(k)*2+(k+1))<<endl;
}



