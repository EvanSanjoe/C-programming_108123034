/*Program to perform arithmetic functions*/
#include <stdio.h>
int main()
{
	int a,b,choice,c;
	printf("Enter 2 numbers");
	scanf("%d %d",&a,&b);
	printf("Enter 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division, 5 for Remainder");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: c=a+b;
				printf("Sum=%d",c);
				break;
		case 2: c=a-b;
				printf("Difference=%d",c);
				break;
		case 3: c=a*b;
				printf("Product=%d",c);
				break;
		case 4: c=a/b;
				printf("Quotient=%d",c);
				break;
		case 5: c=a%b;
				printf("Remainder=%d",c);
				break;
		default: printf("ERROR: Enter number between 1 to 5!");
	}
	return 0;
}
