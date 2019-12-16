#include <bits/stdc++.h>
using namespace std;
void minmaxm(int a[],int n)
{
    int b=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        continue;
        else if(a[i]==1)
        {
            c++;b++;
            if(a[i+1]==1)
            {
              a[i+1]=0;
              b++;
              i++;
              continue;
            }
        }
    }
    cout<<c<<" "<<b<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    minmaxm(a,n);
}

