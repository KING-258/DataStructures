#include<stdio.h>
void LSearch(int a[80], int b, int c)
{
	for(int i=0; i<b; i++)
	{
		if(a[i]==c)
		{
			printf("Found %d at %d\n",c,(i+1));
		}
		else
		{
			printf("Not Found at %d\n",(i+1));
		}
	}
}
int main()
{
	int a;
	int b[80];
	int s;
	printf("Array Size\n");
	scanf("%d",&a);
	printf("Elements\n");
	for(int i=0; i<a; i++)
	{
		scanf("%d",&b[i]);
	}
	printf("What to Find\t");
	scanf("%d",&s);
	LSearch(b,a,s);
	return 0;
}