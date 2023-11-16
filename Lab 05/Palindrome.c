#include<string.h>
#include <stdio.h>
struct Stack
{
    char arr[80];
    int top;
};
void Push(struct Stack *s1, char a)
{
    if (s1->top == 79)
    {
        printf("Stack Overflow");
    }
    else
    {
        s1->arr[s1->top++] = a;
        printf("%c is pushed into stack", a);
    }
}
void Display(struct Stack s1)
{
    printf("\nStack Elements\n");
    for (int i = 0; i < s1.top; ++i)
    {
        printf("%c\t", s1.arr[i]);
    }
    printf("\n");
}
int main()
{
    struct Stack s1;
    printf("Input String");
    gets();
    return 0;
}