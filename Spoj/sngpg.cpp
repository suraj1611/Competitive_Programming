#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
int p[100000]={1};
void prime()
{
    int n=100000;
    p[0]=1;p[1]=1;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i])
        {
            for(int j=2*i;j<=n;j+=i)
            {
                p[j]=0;
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
    int a,b,c=0,i;
    cin>>a>>b;
    prime();
    for(i=a;i<=b;i++)
    {
    if(p[i])
    {
        if(p[(i*i)+1]||p[(i*i)+2])
        c++;
    }
}
    cout<<c<<endl;

}
}
