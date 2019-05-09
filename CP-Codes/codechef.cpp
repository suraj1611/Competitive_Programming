#include<stdio.h>
#include<iostream>
using namespace std;
void min(int n[])
{
    int m=n[0];
    for(int i=0;i<7;i++)
    {
        if(n[i]<m)
            m=n[i];
    }
   cout<<m;
}
int main()
{
    int n,count[7],i,j;
    cin>>n;
    char ch[n];
    gets(ch);
    char b[7]={'c','o','d','e','h','f'};
    for(i=0;i<n;i++)
    {
        count[i]=0;
        for(j=0;j<7;j++)
        {
            if(ch[i]==b[j])
                count[j]++;
        }
    }
    min(count);
return 0;
}
