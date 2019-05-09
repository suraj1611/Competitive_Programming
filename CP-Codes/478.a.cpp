#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int main()
{
int n,i,j;
cin>>n;
string str,stng;
    set <string> st;

rep(i,n)
{
    int c=0;
    stng="";
    cin>>str;
    set <char> s;
    for(j=0;j<str.length();j++)
    {
      s.insert(str[j]);
      c++;
    }
    set <char>::iterator it;
    for(it = s.begin();it != s.end();++it)
        stng+=*it;
    st.insert(stng);
}
cout<<st.size()<<endl;
return 0;
}
