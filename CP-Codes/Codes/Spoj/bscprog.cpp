#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,r=0,t=0;
    cin>>n;
    int s[n];
    for(i=0;i<n;i++)
       {
        cin>>s[i];
        t=t+s[i];}

    int m,j;
    cin>>m;
    int q[m];
    for(j=0;j<m;j++)
       {cin>>q[j];
       r=r+q[j];
       }

        if(r>t)
        {
            for(j=0;j<m;j++)
                cout<<q[j];
        }
        else{
             for(i=0;i<n;i++)
                cout<<s[i];
        }
        return 0;
}
