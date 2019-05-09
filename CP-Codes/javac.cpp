#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define sc scanf
#define pf printf

int main()
{
int k=1;
while(k!=0)
{

    char s[105];
    int i;
   while (!cin.eof())
    {
    cin>>s;
    k=1;  string t;
    for(i=0;i<strlen(s);i++)
    {
        if(!(s[0]>=97&&s[0]<=122))
            {k=0;break;}
        else if(s[i]>=97&&s[i]<=122)
            t+=s[i];
        else if(s[i]=='_')
            {
                if((s[i+1])>=97&&s[i+1]<=122)
                i++,t+=toupper(s[i]);
                else
                {k=0;break;}
            }
        else if(s[i]>=65&&s[i]<=90)
        {
            if(s[i+1]=='_')
            {k=0;break;}
            t+='_';
            t+=tolower(s[i]);
        }
        else
            t+=s[i];

    }
    if(k==0)
        {cout<<"Error!"<<endl;}
    else
        cout<<t<<endl;
    }
}
}
