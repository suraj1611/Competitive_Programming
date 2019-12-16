#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k1=0,k2=0;
        string s,t1,t2;
        cin>>n;
        cin>>s;
        t1=s;k1++;
        for(i=1;i<n;i++)
        {
            cin>>s;
            if(t1.compare(s)==0)
                k1++;
            else
            {
                t2=s;
                k2++;
            }
        }
        if(k1>k2)
            cout<<t1<<endl;
        else if(k2>k1)
            cout<<t2<<endl;
        else
            cout<<"Draw"<<endl;
    }
}
