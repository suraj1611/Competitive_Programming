#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int k=0;
       string s;
       cin>>s;
       for(i=1;i<s.length();i++)
       {
           if((abs(s[i]-s[i-1])==1)||(abs(s[i]-s[i-1])==25))
            k=1;
            else
            {k=0;break;}
       }
       if(k==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
