#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(j,m) for(int j=1;j<m;j++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define pf printf
#define sc scanf
#define maxsize 1100005
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
/*#define miter map <ll,ll> :: iterator it; for(it=m.begin();it!=m.end();it++)
#define viter vector <ll> :: iterator it; for(it=v.begin();it!=v.end();it++)
#define siter set <ll> :: iterator it; for(it=s.begin();it!=s.end();it++)*/

int main()
{
	IOS
	ll a,b,x;
	cin>>a>>b>>x;
	string s="01",p="10",q="01";
	x-=2;a--;b--;
	ll k=1;
	while(x-=2)
    {
        if(k%4==1)
            {
                s=s+p;
                a--;b--;
                //cout<<s<<endl;
            }
        else if(k%4==2)
        {
                s=p+s;
                a--;b--;
                //cout<<s<<endl;
        }
        else if(k%4==3)
            {
                s=s+q;
                a--;b--;
               // cout<<s<<endl;
            }
        else if(k%4==0)
        {
                s=q+s;
                a--;b--;
                //cout<<s<<endl;
        }
        k++;
    }
    while(a--)
    {
        s='0'+s;
    }
    while(b--)
    {
        s=s+'1';
    }
    cout<<s<<endl;


}


