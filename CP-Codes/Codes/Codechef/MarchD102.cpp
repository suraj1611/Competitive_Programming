#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,i;
    cin>>n;
    float p[n],q[n];
    double d[n],loss=0;
    for(i=0;i<n;i++)
    {
        cin>>p[i]>>q[i]>>d[i];
    }

    for(i=0;i<n;i++)
    {
        loss+=(double)((p[i]-((p[i]*(1+(d[i]/100)))*(1-(d[i]/100))))*q[i]);
    }
    cout<<std::fixed<<loss<<endl;
}
}
