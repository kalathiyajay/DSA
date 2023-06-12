// HEAD COUNT LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void head_count(struct node*head)
{
    int cnt=0;
    if(head==NULL)
    printf("\n LIST IS EMPTY");

    struct node *ptr =NULL;
    ptr=head;

    while (ptr!=NULL)
    {
        printf("\t %d",ptr->data);
        cnt++;
        ptr=ptr->next;
    }
    printf("\n LIST COUNT :%d",cnt);
}
void insert_end(struct node **head_ref,int new_data)
{
    struct node *ptr= *head_ref;
    struct node *temp=(struct node*)malloc(sizeof(struct node));

    temp->next=NULL;
    temp->data=new_data;
    if(*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while(ptr->next!=NULL)
    ptr=ptr->next;
    ptr->next=temp;
    return;
}
void delete_node(struct node **head_ref,int key)
{
    struct node *temp=*head_ref,*prev;
    if(temp!=NULL && temp->data==key)
    {
        *head_ref=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    return;
    prev->next=temp->next;
    free(temp);
}
void insert_beg(struct node **head_ref,int new_data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=new_data;
    temp->next=*head_ref;
    *head_ref=temp;
}
void delet_first(struct node **head)
{
    struct node*ptr=*head;
    *head=(*head)->next;
    free(ptr);
}
void delete_end(struct node *head)
{
    struct node *temp=head;
    temp=head;
    if(head->next!=NULL)
    {
        while(temp->next!=NULL)
        temp=temp->next;
        free(temp);
    }
}
int main()
{
    struct node *head =NULL;
    insert_beg(&head,9);
    insert_end(&head,11);
    insert_end(&head,10);
    insert_end(&head,15);
    insert_end(&head,18);
    insert_end(&head,20);
    insert_end(&head,23);
    // delete_node(&head,18);
    // delet_first(&head);
    // delete_end(head);
    head_count(head);
    return 0;
}