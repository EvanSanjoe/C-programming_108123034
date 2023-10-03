#include <stdio.h>
int main()
{
	int a=0,b=1,c=0,i,n;
	printf("Enter n");
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
