#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(3);
    double a,b,d;
    int k=0,i;
    char c;
    cin>>a>>b>>c;
    d=a/b;
    //d*=pow(10,3);
    cout<<"*"<<d<<endl;
    stringstream ss;
    ss << d;
    string str = ss.str();
    //cout<<d<<" "<<str<<endl;
    for(i=0;i<str.length();i++)
    {
        //cout<<str[i]<<" "<<c<<endl;
        if(str[i]==c)
        {k++;break;}
    }
    if(k!=0)
        cout<<i+1<<endl;
    else
        cout<<-1<<endl;
}
