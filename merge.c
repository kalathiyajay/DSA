// #include<stdio.h>
// int main()
// {
//     int n=20,a1[10],a2[10],a[10],i,n1,n2,j=0,k;

//     printf("\n enter element in array 1:");
//     scanf("%d",&n1);    
    
//     printf("\n first array :");
//     for(i=0;i<n1;i++)
//     {
//         printf("\n enter a1[%d]",i);
//         scanf("%d",&a1[i]);
//     }
//     printf("\n enter element in array 2:");
//     scanf("%d",&n2); 

//     printf("\n second array :");

//     for(i=0;i<n2;i++)
//     {
//         printf("\n enter a2[%d]",i);
//         scanf("%d",&a2[i]);
//     }

//     for(i=0;i<n1;i++)
//     {
//         a2[j]=a2[i];
//         j++;
//     }

//     for(i=0;i<n2;i++)
//     {
//         a2[j]=a1[i];
//         j++;
//     }
//     k=n2+n1;
//     for(i=0;i<k;i++)
//     {
//         printf("\t%d",a2[i]);
//     }

// }
#include<stdio.h>
int main()
{
    int a[5],b[5],c[10],i,j=0,d[10],k=0;
    
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<=4;i++)
    {
        c[i]=a[i];
    }
    for(i=5;i<=9;i++)
    {
        c[i]=b[j];
        j++;
    }
    for(i=0;i<=4;i++)
    {
        d[i]=b[i];
    }
    for(i=5;i<=9;i++)
    {
        d[i]=a[k];
        k++;
    }
    for(i=0;i<=9;i++)
    {
        printf("\t%d",c[i]);
    }
    printf("\n");
    for(i=0;i<=9;i++)
    {
        printf("\t%d",d[i]);
    }
}