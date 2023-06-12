#include<stdio.h>
#include<stdlib.h>
void insertonsort(int a[],int size)
{
    for(int step=1; step<=size; step++)
    {
        int key=a[step];
        int j=step-1;
        while(key<a[j] && j>=0)
        {
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=key;
    }
}
int main()
{
    int i,a[25],n=15,min=20,max=101;

    for(i=0;i<n;i++)
    a[i]=rand()%(max-min+1)+min;

    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
    printf("\n");
    insertonsort(a,n-1);

    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
    return 0;

}