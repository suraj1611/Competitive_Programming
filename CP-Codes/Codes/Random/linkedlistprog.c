#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void push(struct node** head,int val)
{
    struct node* avail=(struct node *)malloc(sizeof(struct node));
    avail->data=val;
    avail->next=*head;
    *head=avail;
}

void insert(struct node *prenode,int val)
{
    if (prenode == NULL)
    {
       printf("the given previous node cannot be NULL");
       return;
    }
    struct node* avail=(struct node *)malloc(sizeof(struct node));
    avail->data=val;
    avail->next=prenode->next;
    prenode->next=avail;


}

void printList(struct node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}

int main()
{
    struct node *head = NULL;

    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,44);
        push(&head,4);
        push(&head,5);
        push(&head,6);
        printList(head);
        printf("\n");
        //printf("%d",*head);
        insert(head,63);
        printList(head);

}


