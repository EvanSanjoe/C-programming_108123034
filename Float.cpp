/*Using both float and integer*/
#include <stdio.h>
int main()
{
	float a,b,c;
	int d;
	printf("Enter two numbers");
	scanf("%f %f",&a,&b);
	c=a*b;
	d=a*b;
	printf("Integer=%d Float=%f",d,c);
}
