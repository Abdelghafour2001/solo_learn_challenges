#include<stdio.h>
int main()
{
	int i,k, j, x, y;
x=1;
for(i=1;i<=9;i++)
{
	for(j=9;j>i;j--)
	{
		printf(" ");
	}
	for(k=i; k<=i; k++)
	{
		y=x*8+i;
		printf("%d * 8 + %d = %d\n",x,i,y);
		x=(x*10)+(i+1);
	}
}

	return 0;
}
