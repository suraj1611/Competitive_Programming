#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;t++;
    while(t--)
    {
        char s[10000];
        gets(s);
        int k=strlen(s),i;
        for(i=(strlen(s)-1);i>=0;i--)
        {
            if(s[i]!=' ')
               {
                   continue;
               }
            for(int j=i+1;j<k;j++)
                cout<<s[j];
                cout<<" ";
            k=i;
        }
        for(i=0;i<k;i++)
            cout<<s[i];
        cout<<endl;
    }
}
