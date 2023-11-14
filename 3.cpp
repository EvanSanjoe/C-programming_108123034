#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	char s1[30];
	char s2[30];
	char s3[30];
	printf("Enter String 1: ");
	scanf("%[^\n]s",&s1);
	fflush(stdin);
	printf("Enter String 2: ");
	scanf("%[^\n]s",&s2);
	fflush(stdin);
	for(i=0;s1[i]!='\0';i++)
		s3[i]=s1[i];
	s3[i]=' ';
	for(j=0;s2[j]!='\0';j++)
		s3[i+j+1]=s2[j];
	s3[i+j+2]='\0';
	printf("%s",s3);
}
