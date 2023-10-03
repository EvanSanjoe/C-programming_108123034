#include <stdio.h>
int main()
{
	int n,l=0;
	printf("Enter number");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		l++;
	}
	printf("%d",l);
}
