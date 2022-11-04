#include<stdio.h>
int main()
{
	int x,y,i,j,k;
	x=1;
	int n=9;
	for (i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(k=i;k<=i;k++)
		{
			y=x*8+i;
			printf("%d*8+%d=%d\n",x,j,y);
			x=(x*10)+(i+1);
		}
	}
	return 0;
}
