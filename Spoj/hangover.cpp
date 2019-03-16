#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
int main()
{
float n,sum=0.00;
cin>>n;
double k;
while(n!=0)
{
    for(k=2;;k++)
    {
        sum+=1/k;
        if(sum>=n)
            break;
    }
    cout<<--k<<" "<<"card(s)"<<endl;
    sum=0;
    cin>>n;
}
}
