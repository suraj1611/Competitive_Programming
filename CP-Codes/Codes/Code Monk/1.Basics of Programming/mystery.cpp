#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio (false);
unsigned long long int n;
while(cin>>n)
{
int count=0;
while(n)
{
    n=n&(n-1);
    count++;
}
cout<<count<<endl;
}
}
