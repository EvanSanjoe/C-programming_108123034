/*Checking equality of three numbers*/
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && a==c)
		printf("All three numbers are Equal");
	else
		printf("Not equal");
}
