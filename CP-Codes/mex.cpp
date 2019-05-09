#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int search(int a[],int n,int x)
{
    int i,k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        k=1;
    }
    if(k==1)
        return 1;
    else
  return 0;
}
int main()
{
    int t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
            for(i=0;i<n;i++)
            {
                if(search(a,n,i))
                    {
                       continue;
                    }
                else k--;
                //if(k==0||k==-1)
                cout<<i;
                }
            }
    return 0;
}
