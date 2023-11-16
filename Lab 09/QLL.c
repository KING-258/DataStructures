#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *first = NULL, *temp, *t;
void Push(int a)
{
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = a;
    temp->next = NULL;
    if (first == NULL)
    {
        first = temp;
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
    }
}
int Pop()
{
    int a = first->data;
    first = first->next;
    return a;
}
void Display()
{
    if (first == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        t = first;
        while (t != NULL)
        {
            printf("|%d|-->", t->data);
            t = t->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    int ch;
    printf("Menu\n1.Add()\n2.Pop()\n3.Display()\n4.Exit()\n");
    do
    {
        printf("Input Choice : ");
        scanf("%d",&ch);
        if (ch == 1)
        {
            int ele;
            printf("Element to Add : ");
            scanf("%d",&ele);
            Push(ele);
        }
        else if(ch == 2)
        {
            int ele = Pop();
            printf("%d Popped\n",ele);
        }
        else if (ch == 3)
        {
            Display();
        }
        else if(ch == 4)
        {
            printf("!!Exit!!\n");
        }
        else{
            printf("Try Again");
        }
    }while(ch != 4);
    return 0;
}