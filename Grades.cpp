/*Calculating Grades*/
#include <stdio.h>
int main()
{
	int p,c,m,b,cs;
	float per;
	printf("Enter Subject marks");
	scanf("%d %d %d %d %d",&p,&c,&m,&b,&cs);
	per=(p+c+m+b+cs)/5;
	if(per>=90)
		printf("Grade A");
	else if(per<90 && per>=80)
		printf("Grade B");
	else if(per<80 && per>=70)
		printf("Grade C");
	else if(per<70 && per>=60)
		printf("Grade D");
	else if(per<60 && per>=40)
		printf("Grade E");
	else
		printf("Grade F");
}
