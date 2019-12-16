#include<bits/stdc++.h>
using namespace std;
int check(string s,int i)
{
    string st=s.substr(i,4);
    sort(st.begin(),st.end());
    if(st.compare("cefh")==0)
        return 1;
    else
        return 0;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,c=0;
        string s,st;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='c'||s[i]=='h'||s[i]=='e'||s[i]=='f')
            {
                if(check(s,i))
                    c++;
            }
        }
        if(c>0)
            cout<<"lovely "<<c<<endl;
        else
            cout<<"normal"<<endl;
    }

}
