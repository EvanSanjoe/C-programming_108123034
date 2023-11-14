#include <stdio.h>
int main()
{
	char str[30];
	printf("Enter String: ");
	scanf("%[^\n]s",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
			str[i]=str[i]+32;
	}
	printf("%s",str);
}
