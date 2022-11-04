


#include<stdio.h>
int main()
{
	int n=0;
	do
	{
		if(n%2==0)
		{
			printf("%d est pair \n",n);
			n+=3;
			continue;
		}
		if(n%3==0)
		{
			printf("%d est multiple de 3\n",n);
			n+=5;
		}
		if(n%5==0)
		{
			printf("%d est multiple de 5\n",n);
			break;
		}
		n+=1;
	}
	while(1);
	return 0;
}
