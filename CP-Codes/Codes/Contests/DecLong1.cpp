#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    short int t;
    cin>>t;
    while(t--)
    {
       short int n,m;
       cin>>n>>m;
       char ch[n][m];
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               gets(ch[i]);
           }
       }
    }
}
