#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1,i;
    cin>>n;
    int ar[n];
    cin>>ar[0];
    int min=ar[0];
    for(i=1;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<min)
            count++;
        min=ar[i];
    }
    cout<<count<<endl;
}
