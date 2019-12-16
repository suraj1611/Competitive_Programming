#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a, b);
}

int main()
{
    int i,n,x,sum=0,c=0,j,k;
    cin>>n>>k;
    vector <int> a;
    rep(i,n)
        {
        cin>>x;
        a.push_back(x);
        }
    for(i=0;i<(int)pow(2,n);i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
           if ((i & (1 << j)) != 0)
            sum+=a[j];
        }
        if(sum>=k)
            c++;
    }
    cout<<c<<endl;
}

