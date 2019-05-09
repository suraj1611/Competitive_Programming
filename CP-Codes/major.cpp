#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
int findmaj(int a[],int n)
{
    int c=1,maj=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[maj])
            c++;
        else
            c--;
        if(c==0)
        {maj=i;c=1;}
    }
    return maj;
}
int ismajor(int a[],int x,int n)
{
    int c=0;
    rep(i,n)
    if(a[i]==a[x])
        c++;

    if(c>(n/2))
        return 1;
    else
        return 0;

}
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    scanf("%d",&n);
    int a[n];
    rep(i,n)
    scanf("%d",&a[i]);
    int major=findmaj(a,n);
    if(ismajor(a,major,n))
        printf("YES %d\n",a[major]);
        //<<"YES "<<a[major]<<endl;
    else
        printf("NO\n");


}
return 0;
}
