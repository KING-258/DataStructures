#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char name[80];
	int roll;
	float cgpa;	
};
struct Student Input(struct Student s)
{
	printf("Input name\t");
	scanf("%s",&s.name);
	printf("Input Roll Number\t");
	scanf("%d",&s.roll);
	printf("Input CGPA\t");
	scanf("%f",&s.cgpa);
	return s;
}
int main()
{
	int a, i, j;
	struct Student *s1 = NULL;
	struct Student temp;
	printf("Number of Students");
	scanf("%d",&a);
	s1 = (struct Student *) malloc(a * sizeof(struct Student));
	for(int i=0; i<a; i++)
	{
		s1[i] = Input(s1[i]);
	}
	for(int i=0; i<a; i++)
	{
		printf("%s of Roll Number %d has %f CGPA\n",s1[i].name, s1[i].roll, s1[i].cgpa);
	}

	for(i=0; i<a; i++)
	{
		for(j=i+1; j<a; j++);
		{
			if(s1[i].roll > s1[j].roll)
			{
				temp = s1[i];
				s1[i] = s1[j];
				s1[j] = temp;
			}
		}
	}

	for(int i=0; i<a; i++)
	{
		printf("Name : %s\n",s1[i].name);
		printf("Roll Number : %d\n",s1[i].roll);
		printf("CGPA : %f\n",s1[i].cgpa);
	}
	return 0;
}