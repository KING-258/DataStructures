#include<stdio.h>
struct Stack
{
    int top;
    int arr[80];
};
void Push(struct Stack *s1, int a)
{
    if (s1->top == 79)
    {
        printf("Stack Overflow");
    }
    else
    {
        s1->arr[s1->top++] = a;
    }
}
void Display(struct Stack s1)
{
    printf("\nBinary Number : ");
    for (int i = s1.top; i>=0; i--)
    {
        printf("%d", s1.arr[i]);
    }
    printf("\n");
}
int main()
{
    struct Stack s1;
    s1.top = 0;
    int a;
    printf("Decimal Number : ");
    scanf("%d",&a);
    while(a!=0)
    {
        int rem = a%2;
        a/=2;
        Push(&s1, rem);
    }
    Display(s1);
    return 0;
}