#include<stdio.h>
#include<stdlib.h>
struct DOB
{
	int date,month,year;
};
struct Address
{
	int houseno;
	int zipcode; 
	char state[80];
};
struct Employee
{
	struct DOB d;
	struct Address a;
	char name[80];
};
struct Employee Input()
{
	struct Employee e1;
	printf("Name\t");
	scanf("%s",&e1.name);
	printf("Date of Birth DDMMYYYY\n");
	scanf("%d",&e1.d.date);
	scanf("%d",&e1.d.month);
	scanf("%d",&e1.d.year);
	printf("Address House Number ZipCode State :\n");
	scanf("%d",&e1.a.houseno);
	scanf("%d",&e1.a.zipcode);
	scanf("%s",&e1.a.state);
	return e1;
}
void Display(struct Employee e1)
{
	printf("%s born on %d-%d-%d lives at %d %s -%d\n",e1.name,e1.d.date, e1.d.month, e1.d.year, e1.a.houseno, e1.a.state, e1.a.zipcode);
}
int main()
{
	int n;
	struct Employee *e;
	printf("Input N\t");
	scanf("%d",&n);
	e = (struct Employee *) malloc(n * sizeof(struct Employee));
	for(int i=0; i<n; i++)
	{
		e[i] = Input();
	}
	for(int i=0; i<n; i++)
	{
		Display(e[i]);
	}
	return 0;
}