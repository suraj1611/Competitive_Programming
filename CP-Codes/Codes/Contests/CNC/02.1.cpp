#include<bits/stdc++.h>
using namespace std;
int calc(long int n,int m)
{
    int c=0;
for(int i=1;i<=n;i++)
        {
            if(n%i==0&&m%i==0)
                c=0;
            else
                c++;
        }
return c+m;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        long int n;
        cin>>n>>m;
        cout<<(calc(n,m))<<endl;
    }
}
