#include<stdio.h>
int main()
{
	int s, elem;
	printf("donnez les valeurs de la suite, 999 pour finir\n");
	scanf("%d",&elem);
	if(elem==999)
	printf("liste vide");
	else
	{
		while (elem != 999)
		{
		if(elem>0)
		{
			s=s+elem;
		}
			scanf("%d",&elem);
		}
		printf("la somme  d'elements de la suite est: %d \n",s);
	}
	return 0;
}
