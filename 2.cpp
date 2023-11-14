#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	char s1[30]="Hello ";
	char s2[30];
	printf("Enter Name : ");
	scanf("%[^\n]s",&s2);
	fflush(stdin);
	for(i=0;s2[i]!='\0';i++)
		s1[i+6]=s2[i];
	printf("%s",s1);
}
