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
#define maxsize 1000005

static int  a[maxsize]={0};

void ispalin()
{
    int n;
    for(int i=1;i<1000000;i++)
    {
    n=i;
    int rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    if(rev==i)
        a[i]=1;
    //cout<<"hello"<<endl;
    }
}

int main()
{
    ispalin();
    int  t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        ++x;
        while(!a[x])
        {
            x++;
        }
        cout<<x<<endl;
    }

}
