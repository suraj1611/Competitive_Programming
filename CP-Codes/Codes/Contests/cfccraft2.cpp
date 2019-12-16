#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,c=0;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
        cin>>a[i];
    int m = sizeof(a)/sizeof(a[0]);
    sort(a, a+m);
    for(i=n-1;i>=0;i--)
    {
        c++;
        if(a[i]==a[i-1])
        continue;
        else
            break;
    }
    if(c%2==0)
        cout<<"Agasa"<<endl;
    else
        cout<<"Conan"<<endl;
}
