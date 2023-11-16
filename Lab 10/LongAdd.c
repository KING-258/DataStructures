#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next, *prev;
};
struct Node *first = NULL, *first1 = NULL, *result = NULL, *temp, *t;
void Add(int a)
{
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = a;
    temp->next = NULL;
    if (first == NULL)
    {
        first = temp;
        first->prev = NULL;
    }
    else
    {
        struct Node *ptr;
        ptr = first;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
}
void Add1(int a)
{
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = a;
    temp->next = NULL;
    if (first1 == NULL)
    {
        first1 = temp;
        first1->prev = NULL;
    }
    else
    {
        struct Node *ptr;
        ptr = first1;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
}
void Add1a2(){
    temp = first1;
    t = first;
    while(temp->next != NULL)
    {
        int a = t->data + temp->data;
        if(a>10){
            a = a%10;
        }
        t->data = a;
        temp = temp->next;
        t = t->next;
    }
}
void Display()
{
    t = first;
    while (t != NULL)
    {
        printf("%d", t->data);
        t = t->next;
    }
    printf("\n");
}
void Display1()
{
    t = first1;
    while (t != NULL)
    {
        printf("%d", t->data);
        t = t->next;
    }
    printf("\n");
}
int main()
{
    int a, b;
    printf("Length of Number1 : ");
    scanf("%d", &a);
    printf("Length of Number2 : ");
    scanf("%d", &b);
    if (a >= b)
    {
        printf("Input for A");
        for (int i = 0; i < a; i++)
        {
            int s;
            printf("Digit at %d place : ", (i + 1));
            scanf("%d", &s);
            Add(s);
        }
        printf("Input for B");
        for(int i=0; i<(a-b); i++)
        {
            Add1(0);
        }
        for (int i = 0; i < b; i++)
        {
            int s;
            printf("Digit at %d place : ", (i + 1));
            scanf("%d", &s);
            Add1(s);
        }
    }
    else{
        printf("Input for A");
        for(int i=0; i<(b-a);i++)
        {
            Add(0);
        }
        for (int i = 0; i < a; i++)
        {
            int s;
            printf("Digit at %d place : ", (i + 1));
            scanf("%d", &s);
            Add(s);
        }
        printf("Input for B");
        for (int i = 0; i < b; i++)
        {
            int s;
            printf("Digit at %d place : ", (i + 1));
            scanf("%d", &s);
            Add1(s);
        }
    }
    Display();
    Display1();
    Add1a2();
    Display();
    return 0;
}