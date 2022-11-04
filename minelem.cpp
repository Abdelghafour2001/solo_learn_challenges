#include<stdio.h>
int main()
{
	int min, elem;
	printf("donnez les valeurs de la suite, 999 pour finir\n");
	scanf("%d",&elem);
	min=elem;
	if(elem==999)
	printf("liste vide");
	else
	{
		while (elem != 999)
		{
				if(min>=elem)
				min=elem;
			scanf("%d",&elem);
		}
		printf("le mini  d'elements de la suite est: %d \n",min);
	}
	return 0;
}
