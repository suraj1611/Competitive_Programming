#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
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
        cout<<(float)((k!)/(k-l)!(l!))/(((t)(t-1))/2)
        else
        cout<<(float)((l!)/(l-k)!(k!))/(((t)(t-1))/2)

    }
}
