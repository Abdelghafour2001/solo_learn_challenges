#include<stdio.h>

int som_div(int n)
{ 
int i,s=0;
for (i=1; i<=n;i++)
{
	if(n%i==0)
	s=s+i;
}
return s;
}
int main()
{
	int n1, n2;
	printf("intro les deux nombres\n");
	printf("nbre 1\n");
	scanf("%d",&n1);
	printf("nbre 2\n");
	scanf("%d",&n2);
	if (som_div(n1)==som_div(n2))
	printf("ces deux nbre sont amis\n");
	else
	printf("ces deux nbre ne sont pas amis\n");
	return 0;
}

