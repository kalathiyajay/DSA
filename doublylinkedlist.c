#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void printlist(struct node *node)
{
    struct node *last;

    if(node==NULL)
    printf("\n NULL");
    
    while(node!=NULL)
    {
        printf("\t%d",node->data);
        last=node;
        node=node->next;
    }
}
int main()
{
    struct node *head;
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;

    one=malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));

    one->data=11;
    two->data=22;
    three->data=33;

    one->next=two;
    one->prev=NULL;

    two->next=three;
    two->prev=one;

    three->next=NULL;
    three->prev=one;

    head=one;
    printlist(head);
}