#include<stdio.h>
#include<math.h>
static int count = 0;
void Toh(int a, char rf, char rt, char via)
{
	if(a==1)
	{
		printf("Move Ring %d from %c to %c \n",a,rf,rt);
		count++;
		return;
	}
	Toh(a-1, rf, via, rt);
	printf("Move Ring %d from %c to %c \n",a,rf,rt);
	count++;
	Toh(a-1, via, rt, rf);
}
int main()
{
	int l = 0;
	int d;
	printf("Number of Disks\t");
	scanf("%d",&d);
	Toh(d, 'A', 'C', 'B');
	printf("Number of Moves is %d",count);
	return 0;
}