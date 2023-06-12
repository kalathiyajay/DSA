// MERGE SORT
#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int b[100];
    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
        b[k++]=a[i++];
        else
        b[k++]=a[j++];
    }
    while(i<=mid)
    b[k++]=a[i++];

    while(j<=h)
    b[k++]=a[j++];

    for(i=l;i<=h;i++)
    a[i]=b[i];
}
void mergesort(int a[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}
int main()
{
    int a[20],min=20,max=100,val,n=15;
    printf("\n BEFORE SWAPING");
    for(int i=0;i<15;i++)
    {
        a[i]=rand()%(max-min+1)+min;
        printf("\t%d",a[i]);
    }
    mergesort(a,0,n-1);
    printf("\n AFTER SWAPING");
    for(int i=0;i<15;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n");

    return 0;
}