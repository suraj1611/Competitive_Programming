#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n,k,temp,sum=0;
        cin>>n;
        int a[n][n];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            cin>>a[i][j];


        for(i=0;i<n;i++)
        {
        for(j=0;j<n-1;j++)
        {
            for(k=0;k<n-j-1;k++)
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
