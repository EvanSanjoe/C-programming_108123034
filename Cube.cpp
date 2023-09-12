/*To find Cube of a number*/
#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	a=pow(a,3);
	printf("The cube is %d",a);
	return 0;
}
