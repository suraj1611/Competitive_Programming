#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        char ch[9][20]={"one","two","three","four","five","six","seven","eight","nine"};
    if(i>=1&&i<=9)
        cout<<ch[i-1]<<endl;
    else if((i>9)&&(i%2==0))
        cout<<"even"<<endl;
    else if((i>9)&&(i%2!=0))
        cout<<"odd"<<endl;
    }
    return 0;
}
