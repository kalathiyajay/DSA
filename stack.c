#include<stdio.h>
int n=10,top=-1;
int stack[10];
void push(int val)
{
    if(top>n-1)
    {
        printf("\n OVERFLOW ");
    }
    else
    {
        stack[++top]=val;
    }
}
void pop()
{
    int x;
    if(top<0)
    {
        printf("OVERFLOAW");
    }
    else
    {
        stack[top--];
        return x;
    }
}
void print()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d \t",stack[i]);
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    print();
    
}