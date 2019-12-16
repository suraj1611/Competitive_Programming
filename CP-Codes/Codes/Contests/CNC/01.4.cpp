#include<bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
              return 0;
            }
        }
        return 1;
}
int subPrime(int n)
{
  for(int i=2;i<n;i++)
  {
      if(isPrime(i))
                {
                    int k=n/i;
                    if(k*i==n&&isPrime(k))
                        return 1;
                    else
                        return 0;
                }
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,k=0;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
            if((isPrime(i+2))||(subPrime(i+2)));
                k++;
            cout<<k<<endl;
    }
}
