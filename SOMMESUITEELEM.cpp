#include<stdio.h>
int main()
{
	int S=0, elem;
	printf("donnez les valeurs de la suite, 999 pour finir\n");
	scanf("%d",&elem);
	if(elem==999)
	printf("liste vide");
	else
	{
		while (elem != 999)
		{
				S=S+elem;
			scanf("%d",&elem);
		}
		printf("la somme  d'elements de la suite est: %d \n",S);
	}
	return 0;
}
