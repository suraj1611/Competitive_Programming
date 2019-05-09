#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE   
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll j=0,c=0,d=0,cd=0;;
        for(i=0;i<n;i++)
        {
            d=0;
            for(j=0;j<n;j++)
            {
                if(__gcd(a[i],a[j])==1)
                {
                    d++;
                    break;
                    
                }
            }
            if(d==0)
            {
                c=i;
                cd++;
                break;
            }
        }

            if(cd==1)
            {
                cout<<"1"<<endl;
                for(i=0;i<n;i++)
                {
                    if(i==c)
                    {
                        cout<<"47 ";
                        continue;
                    }
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                
            }
            else
            {
                cout<<"0"<<endl;
                for(i=0;i<n;i++)
                cout<<a[i]<<" ";
                cout<<endl;
            }
    }
    return 0;
}