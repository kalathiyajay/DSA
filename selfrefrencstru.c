#include<stdio.h>
struct Node
{
    int val;
    char data;
    struct Node *next;    
};
int main()
{
    struct Node node1,node2,node3;
    
    node1.val=65;
    node1.data='A';
    node1.next=NULL;

    node2.val=66;
    node2.data='B';
    node2.next=NULL;

    node3.val=67;
    node3.data='C';
    node3.next=NULL;

    node1.next=&node2;
    node2.next=&node3;

    printf("\n %c--%d",node1.data,node1.val);
    printf("\n %c--%d",node1.next->data,node1.next->val);
    printf("\n %c--%d",node1.next->next->data,node1.next->next->val);
}
