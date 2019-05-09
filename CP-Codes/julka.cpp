#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long int tot[100000],more[10000],nat[10000],i;
        for(i=1;i<=2;i++)
            cin>>tot[i]>>more[i];
     for(i=1;i<=2;i++)
    {
        nat[i]=(tot[i]-more[i])/2;
        cout<<nat[i]+more[i]<<"\n";
        cout<<nat[i]<<"\n";
    }
    return 0;
}
