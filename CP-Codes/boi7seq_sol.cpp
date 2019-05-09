#include<cstdio>
#include<stdlib.h>
#include<limits.h>
#include<iostream>
#include<cstdlib>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<map>
#include<queue>
#include<vector>
#include<list>
#include<stack>
#include<queue>


using namespace std;
#define ll long long int
inline ll power(int base,int n);

#define MX 1000005
#define f(x,y,z) for((x)=(y);(x)<(z);(x)++)
#define fe(x,y,z) for((x)=(y);(x)<=(z);(x)++)
#define fm(x,y,z) for((x)=(y) ; (x)>(z) ; (x)--)
#define FLUSH fflush(stdout)
#define copy(dest,src,size) memcpy(dest,src,size)
#define NL {printf("\n");}

stack <ll> s;
ll a[MX];
ll mi = 0;
int main()
{
    int i,j,k,n;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    mi = 0;
    for(i=0;i<n;i++)
    {
        if(!s.empty() && s.top() <= a[i] )
        {
            s.pop();
            while(!s.empty() && s.top() <= a[i])
            {
                mi += s.top();
                s.pop();
            }
            mi += a[i];
        }
        s.push( a[i] );
    }
    while(s.size()>1)
    {
        s.pop();
        mi += s.top();
    }
    printf("%lld\n",mi);

    return 0;
}
/* problem:
 */
inline ll power(int base,int n)
{
    ll ans=1;
    while(n)
    {
        if(n&1==1) ans*=base;
        base*=base;
        n=(n>>1);
    }
    return ans;
}
