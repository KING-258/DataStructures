#include <stdio.h>
#include <string.h>
void Rev(char *str,char *s1, int a, int b)
{
	int l;
	if(a==b)
	{
		printf("String before Reversing %s \n",str);
		printf("String after reversing %s \n",s1);
		l = strcmp(s1,str);
		if(l == 0)
		{
			printf("Palindrome");
		}
		else
			printf("Not a Palindrome");
		return;
	}
	s1[a] = str[b-a-1];
	Rev(str,s1, a+1, b);
}
int main()
{
	char str[100];
	char s1[100];
	printf("Input String \t");
	gets(str);
	puts(str);
	printf("\n");
	Rev(str, s1, 0, strlen(str));
	return 0;
}