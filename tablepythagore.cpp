#include<stdio.h>
int main()
{
	int i,j;
	int n = 10;
	printf("%4c",' ');
	for(i=0; i<=n; i++)
	{
		printf("%4d",i);
	}
	printf("\n");
	for(i=0; i<=n; i++)
	{
		printf("%4d",i);
		for(j=0; j<=n; j++)
		{
			printf("%4d",i*j);
		}
		printf("\n");
	}
	
}
