/* Program to calculate Percentage of student*/
#include <stdio.h>
int main()
{
	float a,b,c,d,e,p;
	printf("Enter Subject marks");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	p=(a+b+c+d+e)/5;
	printf("Percentage marks = %f%%",p);
	return 0;
}
