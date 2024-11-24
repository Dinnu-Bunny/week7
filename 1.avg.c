#include<stdio.h>
int fun(int*p,int n);
int main()
{
	int i,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the values");
		scanf("%d",&a[i]);
	}
	float c=fun(a,n);
	printf("%f",c/n);
	return 0;
}
int fun(int *p,int n)
{
	int i,c=0;
	for(i=0;i<n;i++)
	{
		c=c+*(p+i);
	}
	return c;
}
