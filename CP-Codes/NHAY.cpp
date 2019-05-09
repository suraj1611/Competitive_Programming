#include<bits/stdc++.h>
using namespace std;
int match(int i,string a,string str)
{
    int j,k=0;
    for(j=0;j<a.length();j++)
    {
        if(str[i]==a[j])
        {
            k=1;
        }
        else
            return 0;
    }
    return k;
}
int main()
{
    int n;
    string a,str;
    while(cin>>n)
    {
        cin>>a;
        int l1=a.length();
        cin>>str;
        int l2=str.length();
        int i=0;
            for(i=0;i<l2;i++)
            {
                if(str[i]==a[0])
                {
                    if(match(i,a,str))
                    {
                        cout<<i<<endl;
                        i+=l1;
                    }
                }

            }
    }
}
