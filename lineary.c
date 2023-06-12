#include<stdio.h>
int main()
{
    int a[10],i,j,n;

    printf("\n ENETER ELEMNT :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("ARRAY[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n ENTER SEARCH ELEMNET :");
    scanf("%d",&j);

    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        break;
    }
    if(i<n)
    {
        printf("\n ELEMENT INDEX NUMBER %d:",i);
    }
    else
    {
        printf("NOT FOUND ");
    }
    return 0;
}