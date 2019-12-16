#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int fact(int n)
{
    if(n==0) return 1;
    if (n>0) return n*fact(n-1);
}

float comb(int n,int r)
{
    if(n==r) return 1;
    if (r==0&&n!=0) return 1;
    else return (n*fact(n-1))/fact(n-1)*fact(n-r);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0,l=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int m = sizeof(a)/sizeof(a[0]);
        sort(a, a+m);
        int t=n;
        n--;
        if(a[n]==a[n-1])
        {
            k++;n--;
            continue;
        }
        if(a[n]==a[n-1])
        {
            l++;n--;
            continue;
        }
        if(k>l)
        cout<<comb(k,l)<<"hey";
        else
        cout<<comb(l,k)<<"hey";

    }
}
