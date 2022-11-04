#include<stdio.h>
int main()
{
	int occ=0, elem;
	printf("donnez les valeurs de la suite, 999 pour finir\n");
	scanf("%d",&elem);
	if(elem==999)
	printf("liste vide");
	else
	{
		while (elem != 999)
		{
			occ++;
			scanf("%d",&elem);
		}
		printf("le nombre d'elements de la suite est: %d \n",occ);
	}
	return 0;
}
