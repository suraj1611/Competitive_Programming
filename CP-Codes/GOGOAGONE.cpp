#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[8],p,sum=0,i;
  for(i=0;i<8;i++)
    cin>>a[i];
    int b[8];
    for(i=0;i<8;i++)
        b[i]=1;
    cin>>p;
    int x[p],y[p];
    for(i=0;i<p;i++)
        {
            cin>>x[i]>>y[i];
            if(a[x[i]-1]>=a[y[i]-1])
                b[y[i]-1]=0;
            else
                b[x[i]-1]=0;
        }

    for(i=0;i<8;i++)
    {
        if(b[i]==1)
            {
            sum+=a[i];
            }
    }
    cout<<sum<<endl;
}
