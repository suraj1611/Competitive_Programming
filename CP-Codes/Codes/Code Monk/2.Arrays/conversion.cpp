#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    t++;
    while(t--)
    {
        int i;
      char s[200];
      gets(s);
       for(i=0;i<strlen(s);i++)
       {
           if(isalpha(s[i]))
           {
           s[i]=(int)((toupper(s[i]))-64);
           cout<<(int)s[i];
           }
           else
            cout<<'$';
       }
       cout<<endl;
    }
}
