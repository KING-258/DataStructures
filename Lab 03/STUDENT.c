#include<stdio.h>
#include<stdlib.h>
struct DOB
{
	int date, year;
	int *month;
};
struct STU_INFO
{
	int reg_no;
	char *name[80];
	char address[80];
};
struct COLLEGE
{
	char *clg_name[80];
	char uni_name[80];
};
struct STUDENT
{
	struct DOB d;
	struct STU_INFO s;
	struct COLLEGE c;
};
struct STUDENT Input()
{
	struct STUDENT s0;
	printf("Student Info\n Name Reg_NO and Address");
	s0.s->name = (char *) malloc(80 *sizeof(char));
	scanf("%s",s0.s.name);
}
int main()
{
	int n;
	struct STUDENT *s1;
	printf("Input n");
	scanf("%d",&n);
	s1 = (struct STUDENT *) malloc(n * sizeof(struct STUDENT));
	for(int i=0; i<n; i++)
	{
		s1[i] = Input();
	}
	return 0;
}