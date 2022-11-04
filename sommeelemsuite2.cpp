#include<stdio.h>
int main()
{
	int nb, elem,s;
	printf("donnez le nombre des valeurs de la suite\n");
	scanf("%d",&nb);
	scanf("%d",&elem);
	{
		for(i=1)
		{
			s=s+elem;
			scanf("%d",&elem);
		}
		printf("la somme d'elements de la suite est: %d \n",s);
	}
	return 0;
}
