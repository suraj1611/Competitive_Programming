#include<bits/stdc++.h>
using namespace std;
long long int sieve[10000000]={0};
long long int ar[10000000];

int main()
{
    int i,j;
    for (i=2; i<10000000; i++)
    {
        if (sieve[i] == 0)
        {
            for (j=i; j<10000000; j += i)
               {
                   if(sieve[j]==0)
                    sieve[j]=i;
               }
        }
    }
    ar[0]=0;ar[1]=0;
    for(i=2;i<10000000;i++)
        ar[i]=ar[i-1]+sieve[i];
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        cout<<ar[a]<<endl;
    }
}
