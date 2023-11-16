#include <stdio.h>
void main()
{
	int a;
	int arr[80];
	int b;
	printf("Input Array Size");
	scanf("%d",&a);
	printf("Input Elements\n");
	for(int i=0; i<a; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<a; i++)
	{
		for(int j=i+1; j<a; j++)
		{
			for(int k=j+1; k<a; k++)
			{
				b=arr[i]+arr[j]+arr[k];
				if(b==0)
				{
					printf("Sum of %d %d and %d is 0\n",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
}