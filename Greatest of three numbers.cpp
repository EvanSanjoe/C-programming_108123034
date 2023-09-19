/*Greatest of 3 numbers*/
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 numbers");
	scanf("%d %d %d",&a,&b,&c);
	a>b?(a>c?printf("a"):printf("c")):(b>c?printf("b"):printf("c"));
}
