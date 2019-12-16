#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int s[4];
        {
            s[0]=abs(x-1)+abs(y-1);
            s[1]=abs(x-1)+abs(y-m);
            s[2]=abs(x-n)+abs(y-1);
            s[3]=abs(x-n)+abs(y-m);
        }
        int min=s[0];
        for(int i=1;i<4;i++)
        {
           if(s[i]<min)
                min=s[i];
        }
        cout<<min<<endl;
    }
}
