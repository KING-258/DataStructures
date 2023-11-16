#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *first = NULL, *temp, *t;
void Add(int a)
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
void DD()
{
    t = first;
    struct Node *ptr,*st;
    st = t;
    ptr = st->next;
    temp = ptr->next;
    do
    {
        while (temp != NULL)
        {
            if(ptr->data == t->data)
            {
                st->next = temp;
                ptr = temp;
                temp = temp->next;
            }
            st = st->next;
            ptr = ptr->next;
            temp = temp->next;
        }
        t = t->next;
    } while(t->next->next != NULL);
}
void Display()
{
    t = first;
    while (t != NULL)
    {
        printf("|%d|-->", t->data);
        t = t->next;
    }
    printf("NULL\n");
}
int main()
{
    int ch;
    printf("ADD\nPress100toExit\n");
    do
    {
        scanf("%d",&ch);
        if(ch == 100)
        {
            printf("!!Exit!!\n");
        }
        else{
            Add(ch);
        }
    }while(ch != 100);
    DD();
    Display();
    return 0;
}