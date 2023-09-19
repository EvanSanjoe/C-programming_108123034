/*Calculating Electricity Bill*/
#include <stdio.h>
int main()
{
	int a;
	printf("Enter No. of units used");
	scanf("%d",&a);
	if(a<=200)
		a=0;
	else if(a>200 && a<=400)
		a=a*1.2;
	else if(a>400 && a<=600)
		a=a*1.5;
	else
		a=a*1.8;
	printf("Bill=%d",a);
}
