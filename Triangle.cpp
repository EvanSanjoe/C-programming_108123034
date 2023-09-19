/*Type of Triangle*/
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter lengths of sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && a==c)
		printf("Equilateral triangle");
	else if(a==b || b==c || c==a)
		printf("Isosceles triangle");
	else
		printf("Scalene triangle");
}
