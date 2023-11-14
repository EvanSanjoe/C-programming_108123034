#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char str1[100],str2[100];
	printf("Enter String\n\n");
	scanf("%[^\n]s",&str1);
	for(i=0;str1[i]!='\0';i++)
		str2[i]=str1[strlen(str1)-i-1];
	printf("%s\n\n",str2);
}
