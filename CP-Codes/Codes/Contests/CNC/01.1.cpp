#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        short int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        short int q;
        cin>>q;
        while(q--)
        {
           short int l,r,p=0;int sum=0;
           cin>>l>>r;
           for(i=l-1;i<r;i++)
            {
                sum+=((pow(-1,p))*a[i]);
                p++;
            }
           cout<<sum<<endl;
        }
    }
}
