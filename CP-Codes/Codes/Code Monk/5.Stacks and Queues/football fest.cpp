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
void pop()
        {
        top--;
        }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,initial,i;
    cin>>n;
    int stack[n];
    cin>>initial;
    top++;
    stack[top]=initial;
    char ch;
    for(i=0;i<n;i++)
    {
        cin>>ch;
        if(ch=='B')
        {
            pop();
        }
        else
        {
            push(stack);
        }

    }
    cout<<"Player "<<stack[top]<<endl;
    }
}
