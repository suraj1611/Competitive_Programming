#include<bits/stdc++.h>
using namespace std;
int count(int n,int &c)
{
    if((n&(n-1))==0)
       c++;
    else
    {
        c++;
      count((n&(n-1)),c);
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        cout<<count(n,c)<<endl;
    }
}
