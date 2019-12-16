#include<bits/stdc++.h>
using namespace std;
long int a[1000]={0};
int c=0;
int sq(long int n)
{
    long int b=0;
    a[c]=n;
    while(n!=0)
    {
    b+=pow(n%10,2);
    n/=10;
    }
    c++;
    if(b==1)
        return c;
    for(int i=0;i<c;i++)
    {
        if(a[i]==b)
            return -1;
    }
    sq(b);
}
int main()
    {
        long int n;
        cin>>n;
        int cnt=sq(n);
        cout<<cnt<<endl;
    }
