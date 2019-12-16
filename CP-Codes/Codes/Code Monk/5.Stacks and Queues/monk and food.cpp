#include<bits/stdc++.h>
using namespace std;
int top=-1;
void push(int stack[])
{
    int x;
    cin>>x;
    top++;
    stack[top]=x;
}
void pop(int stack[])
{
    if(top==-1)
        cout<<"No Food"<<endl;
    else
        {
        cout<<stack[top]<<endl;
        top--;
        }
}
int main()
{
    int q,i;
    cin>>q;
    int t[q],stack[10000];
    for(i=0;i<q;i++)
    {
        cin>>t[i];
        if(t[i]==1)
        {
            pop(stack);
        }
        else
        {
            push(stack);
        }

    }

}
