#include <stdio.h>
int main()
{
	int n,s=0,i=1;
	printf("Enter n");
	scanf("%d",&n);
	while(i<=n)
	{
		s=s+i;
		i++;
	}
	printf("%d",s);
}
