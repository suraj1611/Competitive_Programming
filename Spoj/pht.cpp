#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int temp=t;
while(t--)
{
    long int n,p;
    cin>>n;
    p=-1+sqrt(1+n);
    cout<<"Case "<<temp-t<<": "<<p<<endl;
}
}
