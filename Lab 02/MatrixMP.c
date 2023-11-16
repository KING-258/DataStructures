#include<stdio.h>
#include<stdlib.h>
void Multiply(int **a, int **b, int **c, int d, int e, int f, int g)
{	for(int i=0; i<d; i++)
	{
		for(int j=0; j<g; j++)
		{
			c[i][j] = 0;
			for(int k=0; k<e; k++)
			{
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}
}
int main()
{
	int a, b, r, c, **arr1, **arr2, **res;
	printf("Size of Matrix 1 R&C \n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Size of Matrix 2 R&C \n");
	scanf("%d",&r);
	scanf("%d",&c);
	arr1 = (int**) malloc(a * sizeof(int));
	for(int i=0; i<a; i++)
	{
		arr1[i] = (int*) malloc(b * sizeof(int));
	}
	arr2 = (int**) malloc(r * sizeof(int));
	for(int i=0; i<r; i++)
	{
		arr2[i] = (int*) malloc(c * sizeof(int));
	}
	res = (int**) malloc(a* sizeof(int));
	for(int i=0; i<a; i++)
	{
		res[i] = (int*) malloc(c * sizeof(int));
	}
	printf("Input Matrix 1\n");
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Input Matrix 2\n");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("Matrix 1\n");
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			printf("%d \t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("Matrix 2\n");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	if(b == r)
	{
		Multiply(arr1, arr2, res, a, b, r, c);
		printf("Result is :\n");
		for(int i=0; i<a; i++)
		{
			for(int j=0; j<c; j++)
			{
				printf("%d \t",res[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("Not Possible");
	return 0;
}