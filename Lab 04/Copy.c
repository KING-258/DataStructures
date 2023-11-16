#include<stdio.h>
#include<string.h>
void Copy(char *str, char *s1, int a, int b)
{
	if (a == b)
	{
		printf("String Copied \n");
		puts(s1);
		return;
	}
	s1[a] = str[a];
	Copy(str, s1, a+1, b);
}
int main()
{
	char str[100];
	char s[100];
	printf("Input String\t");
	gets(str);
	Copy(str, s, 0, strlen(str));
	return 0;
}