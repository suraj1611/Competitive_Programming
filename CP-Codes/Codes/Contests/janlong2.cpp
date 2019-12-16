#include<bits/stdc++.h>
using namespace std;
void sorting(int a[700][700],int n)
{
    int temp;
  for(short int i=0;i<n;i++)
        {
        for(short int j=0;j<n-1;j++)
        {
            for(short int k=0;k<n-j-1;k++)
            {
                if(a[i][k]<a[i][k+1])
                {
                    temp=a[i][k];
                    a[i][k]=a[i][k+1];
                    a[i][k+1]=temp;
                }
            }
        }
        }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        short int i,j,n,k;
        cin>>n;
        int a[700][700],temp,sum=0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            cin>>a[i][j];
        sorting(a,n);
        sum=a[n-1][0];k=n-1;temp=sum;
        for(i=n-2;i>=0;i--)
        {
            for(j=0;j<n;j++)
        {
            if(a[i][j]<temp)
                {
                    temp=a[i][j];
                    sum+=a[i][j];
                    k--;
                    break;
                }
        }
        if(k!=i)
           {
            sum=-1;
            break;
           }
        }
        cout<<sum<<endl;
}
}
