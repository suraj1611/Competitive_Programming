#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int i,a,b;
    cin>>a>>b;
    int ng[a],nm[b];
    for(i=0;i<a;i++)
        cin>>ng[i];
    for(i=0;i<b;i++)
        cin>>nm[i];
    sort(ng,ng+a);
    sort(nm,nm+b);
    while(a!=0&&b!=0)
    {
        if(ng[a-1]==nm[b-1])
            b--;
        else if(ng[a-1]<nm[b-1])
            a--;
        else
            b--;
    }

    if(a==0)
        cout<<"MechaGodzilla"<<endl;
    else if(b==0)
        cout<<"Godzilla"<<endl;
    else
        cout<<"uncertain"<<endl;

}
}
