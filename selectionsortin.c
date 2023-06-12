// SELECTIN SORTING
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n=10,temp,min=10,max=99,a[100];
    for(i=0;i<n;i++)
    {
       a[i]=rand()%((max-min+1))+min;

    //    printf("%d",i);
    //    scanf("%d",&a[i]);
    }
    printf("BEFRO SWAPING.............");
    for (i = 0; i<n; i++)
    {
        printf("\t%d",a[i]);
    }
    
    for(i=0;i<n-1;i++)
    
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n AFTER SWAPING.............");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}