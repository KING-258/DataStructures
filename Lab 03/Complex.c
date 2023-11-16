#include<stdio.h>
#include<stdlib.h>
struct Complex
{
	int a;
	int b;
};
struct Complex Add(struct Complex x, struct Complex y)
{
	struct Complex ans;
	ans.a = x.a + y.a;
	ans.b = x.b + y.b;
	return ans;
}
struct Complex Difference(struct Complex x, struct Complex y)
{
	struct Complex ans;
	ans.a = x.a - y.a;
	ans.b = x.b - y.b;
	return ans;
}
struct Complex Multiply(struct Complex x, struct Complex y)
{
	struct Complex ans;
	ans.a = (x.a * y.a) - (x.b * y.b);
	ans.b = (x.a * y.b) + (x.b * y.a);
	return ans;
}
int main()
{
	struct Complex num1, num2, res1, res2, res3;
	printf("Number 1 Real & Imaginary Components\n");
	scanf("%d",&num1.a);
	scanf("%d",&num1.b);
	printf("Number 2 Real & Imaginary Components\n");
	scanf("%d",&num2.a);
	scanf("%d",&num2.b);
	res1 = Add(num1, num2);
	res2 = Difference(num2, num1);
	res3 = Multiply(num1, num2);
	printf("Sum is %d+%di\n",res1.a,res1.b);
	printf("Difference is %d+%di\n",res2.a,res2.b);
	printf("Product is %d+%di\n",res3.a,res3.b);
	return 0;
}