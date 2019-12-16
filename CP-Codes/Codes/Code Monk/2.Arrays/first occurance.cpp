#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        string s;
        cin>>s;
        int a[26]={0};
        for(i=0;i<s.length();i++)
            {
               if(a[s[i]-97]==0)
            {
                cout<<s[i];
                a[s[i]-97]=1;
            }
            }
            cout<<endl;
    }
}

