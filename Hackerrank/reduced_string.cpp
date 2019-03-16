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
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

string s;

void red()
{
    for(ll i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            s.erase(i,i+1);
            cout<<s<<endl;
            break;
        }
        red();
    }

}

int main()
{
	IOS
    cin>>s;
    red();
    if(s.compare("")==0)
        cout<<"Empty String"<<endl;
    else
    cout<<s<<endl;

}

