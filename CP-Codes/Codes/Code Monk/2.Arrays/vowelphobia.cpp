#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,i;
        string s;
        cin>>s;
        for(i=0;i<s.length();i++)
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            c++;
        cout<<c<<endl;
    }
}
