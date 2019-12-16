#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,count=0,i;
cin>>n;
int ar[n];
for(i=0;i<n;i++)
    cin>>ar[i];
int m = sizeof(ar)/sizeof(ar[0]);
sort(ar,ar+m);i=0;
while(ar[i]==ar[0])
{
    count++;
    i++;
}
if(count%2==0)
    cout<<"Unlucky"<<endl;
else
    cout<<"Lucky"<<endl;

}
}
