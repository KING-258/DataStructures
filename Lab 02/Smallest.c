#include<stdio.h>
#include<stdlib.h>
int Smallest(int *ptr, int a)
{
	int m = *ptr;
	for(int i=0; i<a; i++)
	{
		if(m > *(ptr + i))
		{
			m = *(ptr + i);
		}
	}
	return m;
}
int main()
{
	int a, s; 
	int *ptr;
	printf("Number of Elements\t");
	scanf("%d",&a);
	ptr = (int*) malloc(a *sizeof(int));
	printf("Elements \n");
	for(int i=0; i<a; i++)
	{
		scanf("%d",&ptr[i]);
	}
	s = Smallest(ptr, a);
	printf("%d is smallest",s);
	return 0;
}