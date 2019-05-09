#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,count=0,i,j;
    cin>>n;
    int s[n],cs[n]={0},ans[n]={0};
    cin>>s[0];cs[0]=s[0];
    for(int i=1;i<n;i++)
        {
            cin>>s[i];
            cs[i]=cs[i-1]+s[i];
        }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(i==j)
                continue;
            else if(i<j)
            {
                if((abs(cs[j]-cs[i])-s[j])<=s[j])
                    count++;
            }
            else if(i>j)
            {
                if((abs(cs[j]-cs[i])-s[i])<=s[j])
                    count++;
            }
        }
        cout<<count<<" ";
    }
    cout<<endl;
}
}
