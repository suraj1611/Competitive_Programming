#include<iostream>
using namespace std;
int main()
{
    int t,temp,i,j;
    cin>>t;
    int n[t];
    for(i=0;i<t;i++)
        cin>>n[i];
    for(i=0;i<t;i++)
    {
        for(j=0;j<t-1;j++)
        {
            if(n[j]>n[j+1])
            {
                temp=n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }
        }
    }
    for(i=0;i<t;i++)
        cout<<n[i]<<endl;
}
