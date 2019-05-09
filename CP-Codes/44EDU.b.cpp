#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define sc scanf
#define pf printf

int cb[2005][2005]={0};

int check(int m)
{
    rep(i,m)
    {
        if(cb[i]==0)
            return 0;
    }
    return 1;

}

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int k=0;
    for(i=0;i<n;i++)
    {
         string str;
         cin>>str;
         for(j=0;j<m;j++)
         {
             if(str[j]=='1')
                cb[i][j]++;
         }

    }
    rep(i,n)

    {
        for(j=0;j<m;j++)
            if(cb[i][j]=)
    }

    if(k==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
