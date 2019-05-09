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

int main()
{
int t;
cin>>t;
while(t--)
{
    string a,b,s,str,st;
    int p,k,l1,l2,i;
    cin>>a;
    b=a;
    reverse(b.begin(),b.end());
    //cout<<a<<" "<<b<<endl;
    cin>>str;
    l1=str.length();
    l2=a.length();
    p=l1/l2+l1%l2+l2;
    k=0;
    for(i=0;i<p;i++)
    {
        if(k==0)
            st+=a,k++;
        else
            st+=b,k--;
    }
    //cout<<st<<endl;
    rep(i,l1)
    {
       //s+=(char)((((int)str[i])+(int)(st[i]-48))%122);
       int q,w,e;
       q=(int)(str[i]);
       w=(int)(st[i]-48);
       //cout<<q<<" "<<w<<endl;
       e=(q-w);
       if(e<97)
        e+=26;
       //cout<<(char)e<<endl;
       s+=e;
    }
    cout<<s<<endl;

}
}
