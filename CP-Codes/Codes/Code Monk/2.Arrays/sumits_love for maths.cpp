#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,count=0;
        cin>>n>>a>>b>>c;
        while(n!=0)
        {
        if((n%a==0)||(n%b==0)||(n%c==0))
            {count++;
        n--;
        }
        cout<<count<<endl;
    }
}
