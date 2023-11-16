#include<stdio.h>
void King(int arr[80][80], int a, int b)
{
	int c;
	int d;
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			if(arr[i][j]==0)
			{
				c++;
			}
		}
	}
	d=(a*b)/2;
	if(c<d)
	{
		printf("Sparse");
	}
	else
	{
		printf("Not Sparse Enough");
	}
}
int main()
{
	int r; 
	int c;
	int a[80][80];
	printf("Input Size\n");
	printf("Row \t and Col\t \n");
	scanf("%d \t%d\t",&r,&c);
	printf("\nElements\n");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			printf("%i\t",a[i][j]);
		}
		printf("\n");
	}
	King(a,r,c);
	return 0;
}