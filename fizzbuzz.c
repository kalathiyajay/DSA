// FIZZ BUZZ PROGRAM
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=50;i++)
//     {
//         if(i%15==0)
//         {
//              printf("%d=FEZZBUZZ",i);
//         }
//         else if(i%3==0)
//         {
//              printf("%d=FEZZ",i);
//         }
//         else if(i%5==0)
//         {
//             printf("%d=BUZZ",i);
//         }
//         else
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }
// 
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=50;i++)
//     {
//         if(((i%3)||(i%5))==0)
//         {
//             printf("\n NUM :%d FEZZBUZZ",i);
//         }
//         else if(i%3==0)
//         {
//             printf("\n NUM :%d FEEZ",i);
//         }
//         else if(i%5==0)
//         {
//             printf("\n NUM :%d BUZZ ",i);
//         }
//         else
//         {
//             printf("\n NUM :%d",i);
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=50;i++)
//     {
//         int flag3=i%3==0;
//         int flag5=i%5==0;
//         if(flag3 && flag5)
//         {
//             printf("FIZZBUZZ");
//         }
//         else if(flag3)
//         {
//             printf("FIZZ");
//         }
//         else if(flag5)
//         {
//             printf("BUZZ");
//         }
//         else
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    for(i=1;i<=50;i++)
    {
        char output[10]="";
        if(i%3==0)
        {
            strcat(output,"FIZZ");
        }
        if(i%5==0)
        {
            strcat(output,"BUZZ");
        }
        if(strlen(output)==0)
        {
            printf("%d",i);
        }
        else
        {
            printf("%s",output);
        }
        printf("\n");
    }
}
/*
    struct node *head =NULL;
    insert_end(&head,11);
    insert_end(&head,10);
    insert_end(&head,15);
    insert_end(&head,18);
    insert_end(&head,20);
    insert_end(&head,23);
    delete_node(&head,18);
    delet_first(&head);
    head_count(head);
    return 0;*/