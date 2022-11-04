#include<stdio.h>
int main()
{	int c;
	do{

	printf("intro un caract\n");
	c = getchar();
	printf(" le caract %c a le code ascii %d\n",c,c);
	return 0;
	}while(c!=0);
	
}
