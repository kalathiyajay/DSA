// RANDOME PROGRAM
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        a[i]=rand()/100;
    }
    for(i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }
}