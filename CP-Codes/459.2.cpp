#include<bits/stdc++.h>
using namespace std;
int pos(string s)
{
    return (s.find(' '));
}
int compare(string s,string a[],int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        if(strcmp(a[i].substr((pos(a[i])),(a[i].length()-1)),(s))
            return i;
    }
}
int main()
{
    int n,m,i;
    cin>>n>>m;
    string a[n],b[m];
    for(i=0;i<=n;i++)
        cin>>a[i];
    for(i=0;i<=m;i++)
        cin>>b[i];
    for(i=0;i<=m;i++)
    {
        string s=b[i].substr((pos(b[i])),(b[i].length()-1));
    }

}
