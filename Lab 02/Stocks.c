#include<stdio.h>
#include<stdlib.h>
void Profit(int *ptr, int a)
{	int min = 0;
	int buy = *ptr; int sell = *ptr;
	int profit = sell - buy;
	for(int i=1; i<a; i++)
	{
		int p = *(ptr+i) - ptr[min];
		if(p>profit)
		{
			profit = p;
			buy = min; 
			sell = i;
		}
		if(*(ptr+i) < ptr[min])
		{
			min = i;
		}
		printf("(%d , %d) \t",buy ,sell);
		printf("%d Profit \n",profit);
	
	}
}
int main()
{
	int T, N;
	printf("Input Test Case\t");
	scanf("%d",&T);
	for(int i=0; i<T; i++)
	{
		printf("Number of Days\t");
		scanf("%d",&N);
		int *ptr;
		ptr = (int*) malloc(N * sizeof(int));
		printf("Input Prices\n");
		for(int j=0; j<N; j++)
		{
			scanf("%d",&ptr[i]);
		}
		Profit(ptr, N);
	}
	return 0;
}