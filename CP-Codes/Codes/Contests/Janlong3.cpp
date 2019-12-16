#include<bits/stdc++.h>
using namespace std;
void add(int a[],int b[],int n,int k)
{
   int i=0,j;
            for(j=0;j<(n*k);j++)
            {
                b[j]=a[i];
                i++;
                if(i>=n)
                {
                    i=0;
                    continue;
                }
            }
}
int value(int b[],int p,int temp)
{
  int i,j,k,sum=0;
        for(i=0;i<(p);i++)
        {
             if(b[i]>=0)
                sum+=b[i];
            else
            {
                if(sum>temp)
                    temp=sum;
                sum=0;
            }
        }
        sum=temp;
        return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j,temp=0;
        cin>>n>>k;
        int p=n*k;
        int a[n],b[p];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        add(a,b,n,k);
        i=0;
        while(b[i]>=0)
        {
            temp+=b[i];
            i++;
        }
         for(i=0;i<(p);i++)
            cout<<b[i]<<"\t";
        int sum=value(b,p,temp);
        cout<<sum<<endl;
}
}
