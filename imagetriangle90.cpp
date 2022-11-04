/*dessiner un triangle*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("intro le nbre de ligne");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("@");
		}
		printf("\n");
	}
	return 0;
}
