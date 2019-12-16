#include <iostream>
#include <cstring>
#include<stdio.h>
using namespace std;

int main()
{
    char a[100],b[100],temp;
    gets(a);gets(b);
    cout<<strlen(a)<<" "<<strlen(b)<<endl;
    cout<<a<<b<<endl;
    temp=a[0];a[0]=b[0];b[0]=temp;
    cout<<a<<" "<<b;

   return 0;
}

