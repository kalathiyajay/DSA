// BINARY SEARCH,LINIEAR SERACH,BUBOLE SORT,SELECTION SORT
#include<stdio.h>
#include<stdlib.h>
int linearserch(int a[],int value,int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == value)
            return i;
}
int binaryserch(int a[],int value,int n)
{
    int lb=0,ub=n-1,mid;
    while (lb<ub)
    {
        mid=(lb+ub)/2;

        if(a[mid]==value)
        return mid;
        else if(a[mid]>value)
        ub=mid-1;
        else if(a[mid]<value)
        lb=mid+1;
    }
}
int bubolsort(int a[],int n,int temp)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }        
}
int selectionsorting(int a[],int n,int temp)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int value,i,a[100],j,n=10,ch,temp,min=10,max=99;

    for(i=0;i<n;i++)
    {
        a[i]=rand()%((max-min+1))+min;
        // printf("\n ENTER ARRAY %d:",i);
        // scanf("%d",&a[i]);
    }
    printf("\n ARRAY....");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    do
    {
        printf("\n\n 1.LINEAR SEARCH");
        printf("\n 2.BINARY SEARCH");
        printf("\n 3.BUBULE SORTING");
        printf("\n 4.SELECTION SORTING");


        printf("\n 5.ENTER YOUR CHOICE :");
        scanf("%d",&ch);
        
        switch(ch)
        {

            case 1:
                printf("\n ENTER VALUE :");
                scanf("%d",&value);
                int liniarindex =linearserch(a,value,n);
                printf("\n VALUE :%d \n NDEX NO :%d",value,liniarindex);
            break;

            case 2:
                printf("\n ENTER VALUE :");
                scanf("%d",&value);
                int binaryindex =binaryserch(a,value,n);
                printf("\n VALUE :%d \n NDEX NO :%d",value,binaryindex);
            break;

            case 3:
                bubolsort(a,n,temp);
                printf("\n BOUBLE SORTING AFTER SWAPING.....");
                for(i=0;i<n;i++)
                printf("\t%d",a[i]);
            break;

            case 4:
                selectionsorting(a,n,temp);
                printf("\n SELECTION SORTING AFTER SWAPING.....");
                for(i=0;i<n;i++)
                printf("\t%d",a[i]);
            break;

            default:
                printf("\n WRONG CHOICE......");
            break;
        }
    }while(ch!=0);
}