#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int result(int a[],int b[],int n)
{
    for(int i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                return 0;
            }
            else
                continue;
        }
        return 1;
}
int main()
{
    unsigned int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    sort(a,n);
    sort(b,n);
    if(result(a,b,n))
        cout<<"Yes"<<endl;
    else
        cout<<"No";
}
