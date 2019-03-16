#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
map <int,int> freq;
map<int,int> pos;
int a[10005];
int comp(int x,int y)
{
    if(freq[x] == freq[y])
    {
        return(pos[x] < pos[y]);
    }

    return(freq[x] > freq[y]);
}

int main()
{
    int n,c,i;
    cin>>n>>c;
    rep(i,n)
    {
        cin>>a[i];
        freq[a[i]]++;
    }

    for(i=n-1;i>=0;i--)
    {
        pos[a[i]]=i;
    }
    sort(a,a+n,comp);
    rep(i,n)
    cout<<a[i]<<" ";

}
