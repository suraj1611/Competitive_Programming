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

int ar[6]={0};

void verify(string s)
{
        string str[6]={"purple", "green", "blue", "orange", "red", "yellow"};
    rep(i,6)
    {
        if(s.compare(str[i])==0)
            ar[i]=1;
    }
}

int main()
{
    int n;
    string str[6]={"purple", "green", "blue", "orange", "red", "yellow"};
    string st[6]={"Power", "Time", "Space" , "Soul", "Reality", "Mind"};
    cin>>n;
    rep(i,n)
    {
        string s;
        cin>>s;
        verify(s);
    }
    cout<<6-n<<endl;
    rep(i,6)
    {
        if(ar[i]==0)
            cout<<st[i]<<endl;
    }

}
