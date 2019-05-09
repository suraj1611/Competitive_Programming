#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
int score_cal(ll ar[14])
{
    ll score=0,i;
    for(i=0;i<14;i++)
    {
        if(ar[i]%2==0)
            score+=ar[i];
    }
    return score;
}
int main()
{
ll a[14],temp[14],i,j,c=0;
int scc;
for(i=0;i<14;i++)
    {
        cin>>a[i];
        temp[i]=a[i];
    }
for(i=0;i<14;i++)
{
    ll k=a[i];
    j=i+1;
    c=14;
    if(k<=14)
    {
        while(j<14&&c!=0)
        {
            temp[j]++;
            c--;
        }
        j=0;
        while(c!=0)
        {
          temp[j]++;
          c--;
        }
    scc=max(score_cal(temp),mn);
    }
    else
    {
        ll p=k/14;
        c=14;
        while(j<14&&c!=0)
        {
            temp[j]+=p;
            c--;
        }
        j=0;
        while(c!=0)
        {
          temp[j]+=p;
          c--;
        }
    scc=max(score_cal(temp),mn);
    }
    for(i=0;i<14;i++)
        temp[i]=0;
}
cout<<scc<<endl;
}
