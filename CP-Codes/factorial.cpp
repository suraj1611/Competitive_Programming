#include<iostream>
using namespace std;

#define max 20000

int multiply(int p, int res[], int size)
{
    int carry = 0;

    for (int i=0; i<size; i++)
    {
        int prod = res[i] * p + carry;
        res[i] = prod % 10;
        carry  = prod/10;
    }

    while (carry)
    {
        res[size] = carry%10;
        carry = carry/10;
        size++;
    }
    return size;
}

void fact (int n)
{
    int res[max];

    res[0] = 1;
    int size = 1;

    for (int p=2; p<=n; p++)
    {
        size = multiply(p, res, size);
    }
    int count=0;
    for (int i=0; i<=size-1; i++)
    {
        if(res[i]==0)
            count++;
    }
        cout<<count<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        fact(n);
    }
    return 0;
}
