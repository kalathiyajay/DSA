// INSERT FIRST,INSERT LAST,DELETE FIRST,DELETE LAST LINKED LIST
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
    struct node*ptr =NULL;
    ptr=head;

    while(ptr!=NULL)
    {
        printf("\t %d",ptr->data);
        cnt++;
        ptr=ptr->next;
    }
    printf("\n LIST COUNT NO :%d",cnt);
}
void insert_end(struct node **head_ref,int new_data)
{
    struct node *ptr=*head_ref;
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
void insert_beg(struct node **head_ref,int new_data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=new_data;
    temp->next=*head_ref;
    *head_ref=temp;
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
void delete_first(struct node **head)
{
    struct node *ptr=*head;
    *head=(*head)->next;
    free(ptr);
}
void delete_last(struct node **head)
{
    struct node *ptr=*head;
    struct node *temp=(*head)->next;

    while(temp->next!=NULL)
    {
        ptr=ptr->next;
        temp=temp->next;
    }
    ptr->next=NULL;
    free(temp);
}
int main()
{
    struct node *head=NULL;
    int ch,val;
    do
    {
        printf("\n 1.INSERT END");
        printf("\n 2.INSERT BEG");
        printf("\n 3.DELETE NODE");
        printf("\n 4.DELETE FIRST");
        printf("\n 5.DELETE LAST");
        printf("\n 6.SHOW");
        printf("\n 7.ENTER YOUR CHOICE :");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("\n ENTER VAL :");
                scanf("%d",&val);
                insert_end(&head,val);
            break;
            case 2:
                printf("\n ENTER VAL :");
                scanf("%d",&val);
                insert_beg(&head,val);
            break;
            case 3:
                printf("\n ENTER VAL :");
                scanf("%d",&val);
                delete_node(&head,val);
            break;
            case 4:
                delete_first(&head);
            break;
            case 5:
                delete_last(&head);
            break;
            case 6:
                head_count(head);
            break;
        }
    }while(ch!=0); 
}
