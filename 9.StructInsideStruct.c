#include<stdio.h>
#include<string.h>
struct student
{
	char name[40];
	int rono;
	struct DOB
	{
		int date;
		char month[24];
		int year;
	}s2;
}s1;
int main()
{
	strcpy(s1.name,"Binyameen");
	s1.rono=108124026;
	s1.s2.date=1;
	strcpy(s1.s2.month,"January");
	s1.s2.year=2006;
	printf("%s\n",s1.name);
	printf("%d\n",s1.rono);
	printf("%d\n",s1.s2.date);
	printf("%s\n",s1.s2.month);
	printf("%d\n",s1.s2.year);
	return 0;
}
