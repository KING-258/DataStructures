#include<stdio.h>
int s1[80];
int s2[80];
int top1 = -1;
int top2 = -1 ;
void Push1(int a)
{
    if(top1 == 79)
    {
        printf("Not Possible");
    }
    else{
        top1++;
        s1[top1] = a;
    }
}
void Push2(int a)
{
    if(top2 == 79)
    {
        printf("Not Possible");
    }
    else{
        top2++;
        s2[top2] = a;
    }
}
int main(){
    int a,b;
    printf("Stack 1\n");
    printf("Menu\n");
    printf("1. Push()\n");
    printf("2. Exit()\n");
    do
    {
        printf("Input Choice ");
        scanf("%d",&a);
        if(a == 1)
        {
            int s;
            printf("\nInput Number to add ");
            scanf("%d",&s);
            Push1(s);
        }
        else if (a == 2)
        {
            printf("!!! Exit !!!\n");
        }
        else{
            printf("Try Again\n");
        }
    } while (a!=2);
    printf("Stack 2\n");
    printf("Menu\n");
    printf("1. Push()\n");
    printf("2. Exit()\n");
    do
    {
        printf("Input Choice ");
        scanf("%d",&b);
        if(b == 1)
        {
            int s;
            printf("\nInput Number to add ");
            scanf("%d",&s);
            Push2(s);
        }
        else if (b == 2)
        {
            printf("!!! Exit !!!\n");
        }
        else{
            printf("Try Again\n");
        }
    } while (b!=2);
    int count1=0, count2=0;
    for(int i=0; s1[i] != 0; i++)
    {
        count1++;
    }
    for(int i=0; s2[i] != 0; i++)
    {
        count2++;
    }
    int arr[count1 + count2 + 1];
    for(int i=0; i<count1; i++)
    {
        arr[i] = s1[i];
    }
    for(int i=0; i<count2; i++)
    {
        arr[i+count1] = s2[i];
    }
    printf("Stacks in the Array\n");
    for(int i=0; i<(count1 + count2); i++)
    {
        printf("|%d",arr[i]);
    }
    return 0;
}