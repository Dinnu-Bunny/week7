#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value of n");
	scanf("%d",&n);
	char str[n];
	printf("Entr the string");
	scanf("%s",str);
    char *p=&str[0];
    if(n%2==0)
    {
  		for(i=0;i<(n/2)-1;i++)
		  {
			char c;
			c=*(p+i);
			*(p+i)=*(p+n-2-i);
			*(p+n-2-i)=c;
		  }
	}
	else
	{
		for(i=0;i<(n/2);i++)
		  {
			char c;
			c=*(p+i);
			*(p+i)=*(p+n-2-i);
			*(p+n-2-i)=c;
		  }
	}
	for(i=0;p[i]!='\0';i++)
	{
		printf("%c",p[i]);
	}
	return 0;
}
