// INSERT FIRST,INSERT LAST,DELETE FIRST,DELETE LAST DOUBLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void display()
{
    int cnt=0;
    struct node *ptr;
    ptr=head;
    if(head==NULL)
    printf("\n LIST IS EMPTY..........");

    while(ptr!=NULL)
    {
        printf("\t %d",ptr->data);
        cnt++;
        ptr=ptr->next;
    }
    printf("\n LIST COUNT NO :%d",cnt);
}
void insert_first(int val)
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));

    ptr->data=val;
    if(head==NULL)
    {
        ptr->prev=NULL;
        ptr->next=NULL;
        head =ptr;
    }
    else
    {
        ptr->prev=NULL;
        ptr->next=head;
        head->prev=ptr;
        head=ptr;
    }
}
void insert_end(int val)
{
    struct node *ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    if(head==NULL)
    {
        ptr->prev=NULL;
        ptr->next=NULL;
        head=ptr;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
        temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
        ptr->next=NULL;
    }
}
void delete_first()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("\n UNDFERFLOW");
    }
    else
    {
        temp=head;
        head=temp->next;
        free(temp);
        printf("\n NODE DELETED...........");
    }
}
void delete_end()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    if(head==NULL)
    printf("UNDERFLOW");
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("\n HEAD IS DELETED...");
    }
    else
    {
        while(temp->next!=NULL)
        temp=temp->next;
        temp->prev->next=NULL;
        free(temp);
        printf(" NODE DEELETED.....");
    }
}
int main()
{
    int ch,a,b;
    printf("\n 1.INSERT FIRST");
    printf("\n 2.INSERT END");
    printf("\n 3.DELETE FIRST");
    printf("\n 4.DELETE END");
    printf("\n 5.SHOW");
    do
    {
        printf("\n ENTER YOUR CHOICE");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\n ENTER FIRST ELEMENT :");
            scanf("%d",&a);
            insert_first(a);
            break;
        case 2:
            printf("\n ENTER ELEMENT AT END :");
            scanf("%d",&a);
            insert_end(a);
            break;
        case 3:
            delete_first();
            break;
        case 4:
            delete_end();
            break;
        case 5:
            display();
            break;
        default:
            printf("\n WRONG CHOICE.........");
            break;
        }
    }while(ch!=0);
}


