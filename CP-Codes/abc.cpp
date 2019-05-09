#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define md 1000000007

struct circle
{
    ll xCor;
    ll yCor;
    ll R;
};

ll arr[1000005];

ll power(ll a,ll b)
{
    if(b==0)
        return 1;
    else if(b%2==0)
        return ((power(a,b/2)%md) * (power(a,b/2)%md))%md;
    else
        return (a*((power(a,b/2)%md) * (power(a,b/2)%md)))%md;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    memset(arr, 0, sizeof arr);
    ll n, q;
    cin >> n >> q;
    circle c[n+1];
    for(ll i=1; i<=n; i++)
    {
        cin >> c[i].xCor >> c[i].yCor >> c[i].R;
    }
    for(ll i=1; i<n; i++)
    {
        for(ll j=i+1; j<=n; j++)
        {
            ll dis = (ll)sqrt(pow(c[i].xCor-c[j].xCor, 2) + pow(c[i].yCor-c[j].yCor, 2));
            ll rdis = c[i].R + c[j].R;
            //cout << "dis " << dis << " rdis " << rdis << " \\";
            ll maxD, minD;
            if(dis > rdis)
            {
                maxD = dis + rdis;
                minD = dis - rdis;
            }
            else if(dis > c[i].R && dis > c[j].R && dis < rdis)
            {
                maxD = dis + rdis;
                minD = rdis - dis;
            }
            else if((dis > c[i].R && dis < c[j].R && dis < rdis)||(dis < c[i].R && dis > c[j].R && dis < rdis))
            {
                minD = abs(c[i].R - c[j].R) - dis;
                maxD = dis + abs(c[i].R - c[j].R);
            }
            else if(dis == 0)
            {
                maxD = rdis;
                minD = 0;
            }
            else if(dis == rdis)
            {
                minD = 0;
                maxD = 2*rdis;
            }
            if(minD < (ll)1e6+5 && maxD < (ll)1e6+5)
            {    
                arr[minD]++;
                arr[maxD+1]--;
            }
            //cout << "min " << minD << " maxD " << maxD << endl;
        }
    }
    
    /*for(ll i=1; i<=100; i++)
        cout << arr[i] << " ";
    cout << endl;
    */
    //for(ll i=1; i<=n; i++)
    //{
    //    cout << c[i].xCor << " " << c[i].yCor << " " << c[i].R << endl;
    //}
    
    for(ll i=1; i<=(ll)1e6+5; i++)
    {
       arr[i] = arr[i-1] + arr[i];
    }
    for(ll i=1; i<=q; i++)
    {
        ll j;
        cin >> j;
        cout << arr[j] << endl;
    }
    return 0;
}