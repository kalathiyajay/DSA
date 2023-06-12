// BUBBLE SORTING
#include<stdio.h>
int main()
{
    int i,j,temp,a[100],n=10;

    for(i=0;i<10;i++)
    {
        printf("\n ENTER ARRAY %d:",i);
        scanf("%d",&a[i]);
    }
    printf("\n BEFORE SWAPING....");
    for(i=0;i<10;i++)
    {
        printf("\t%d",a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n AFTER SWAPING.....");
    for(i=0;i<10;i++)
    {
        printf("\t%d",a[i]);
    }
}