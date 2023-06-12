#include<stdio.h>
int main()
{
    int a[10],i,k=0;

    for(i=10;i>=0;i--)
    {
        a[i]=k;
        printf("\n %d",a[i]);
        k++;
    }
}