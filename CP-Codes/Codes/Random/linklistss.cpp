#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void push(struct node** head,int newdata)
    {

    struct node* avail=(struct node*)malloc(sizeof(struct node));
    avail->data=newdata;
    avail->next=*head;
    *head=avail;
    }

int main()
{
    cout<<"Ececuted Successfully"<<endl;
}
