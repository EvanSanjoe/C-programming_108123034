#include <stdio.h>
int main()
{
	int i,n,p;
	printf("Enter n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		p=n*i;
		printf("%d\n",p);
	}
}
