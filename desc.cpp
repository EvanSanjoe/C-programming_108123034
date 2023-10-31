#include <stdio.h>
int main()
{
	int j,n,t,i,b,c;
	printf("Enter number of elements");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements");
	for(b=0;b<n;b++)
	{
		scanf("%d",&a[b]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(c=0;c<n;c++)
	{
		printf("%d",a[c]);
	}
	return 0;
}
