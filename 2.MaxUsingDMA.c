#include<stdio.h>
int main()
{
	int n,*p,i;
	printf("Enter the value of n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof (int));
	for(i=0;i<n;i++)
	{
		printf("Enter the values");
		scanf("%d",(p+i));
	}
	for(i=1;i<n;i++)
	{
		if(p[0]<p[i])
		p[0]=p[i];
	}
	printf("%d",p[0]);
	return 0;
}
