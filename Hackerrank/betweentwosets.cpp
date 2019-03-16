#include <bits/stdc++.h>
using namespace std;

int fact(int x,int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(!((x%a[i])==0))
            return 0;
    }
    return 1;
}

int fact2(int x,int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%x!=0)
            return 0;
    }
    return 1;
}

int main()
{
    int n,m,i,k=0;
    cin >> n >> m;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    int c=0;
    for(i=1;i<=100;i++)
    {
        if((fact(i,a,n))&&(fact2(i,b,m)))
            c++;
    }
    cout<<c+1<<endl;
}
