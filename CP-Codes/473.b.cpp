#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
int main()
{
int n,l,c=0;
string s,str;
cin>>n>>s;
l=s.length();
rep(i,l-2)
{
    if(s[i]=='x')
    {
        str=s.substr(i,3);
        if(str.compare("xxx")==0)
            {c++;}
    }

}
cout<<c<<endl;

return 0;
}
