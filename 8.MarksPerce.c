#include<stdio.h>
union student
{
	char name[15];
	int marks[5];
	int rno;
};
int main()
{
	int i;
	float c=0;
	union student s1;
	s1.name[15]="Dinesh";
	s1.rno=108124028;
	for(i=0;i<5;i++)
	{
		printf("Enter the marks");
		scanf("%d",&s1.marks[i]);
	}
	for(i=0;i<5;i++)
	{
		c=c+s1.marks[i];
	}
	printf("%f",(c/5));
	return 0;
}

