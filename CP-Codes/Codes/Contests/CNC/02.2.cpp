#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x;
        long double y;
        cin>>x>>y;
        int n=trunc(y);
        for(int i=1;i<=x;i++)
        {
            if(i>=(((2.718^x)/(log(y)))+1)&&i<=(log(x)/(2.718^y))
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
