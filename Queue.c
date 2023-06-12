#include<stdio.h>
int front= -1;
int rear= -1;
int queue[10];
int i,n=10;
void insert(int val)
{
    if(rear>n-1)
    {
        printf("QUEUE IS FULL");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=val;
    }
    else
    {
        queue[++rear]=val;
    }
}
int delet()
{
    int x;
    if(front==rear==-1)
    {
        printf("QUEUE IS EMPTY");
    }
    else if(front==rear)
    {
        x=queue[rear];
    }
    else
    {
        x=queue[front++];
        return x;
    }
}
void print()
{
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    print();
    delet();
    delet();
    print();
}