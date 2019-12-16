#include bits/stdc++.h
using namespace std;
void push(struct node **head,int newdata)
    {

    struct avail=(struct node*)malloc(sizeof(struct node));
    avail->data=newdata;
    avail->next=*head;
    *head=avail;
    }
struct node()
{
    int data;
    struct node *next;
};
int main()
{
}
