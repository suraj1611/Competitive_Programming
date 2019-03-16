#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    int i,sum=0;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        sum+=(int)(s[i]-48);
    }
    cout<<sum<<endl;
    }
}
