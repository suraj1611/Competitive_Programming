#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 int amt;
 float bal,newbal;;
 cin>>amt>>bal;
 newbal=(bal-(amt+0.50));
 if(newbal>=0&&amt%5==0)
    cout<<"\n"<<fixed << setprecision(2)<<newbal;
else
    cout<<"\n"<<fixed << setprecision(2)<<bal;
return 0;
}
