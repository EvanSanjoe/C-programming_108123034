#include <stdio.h>
int main()
{
	int i,count=0;
	char ch[30];
	printf("Enter a String\n");
	scanf("%[^\n]s",&ch);
	for(i=0;ch[i]!='\0';i++)
		count++;
	printf("String length = %d",count);
}
