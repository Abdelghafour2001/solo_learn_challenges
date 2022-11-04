#include<stdio.h>
int main()
{
	int i, nb, min, elem ,oc=0;
	printf("donnez les valeurs de la suite\n");
	scanf("%d",&nb);
	scanf("%d",&elem);
			for(i==1;i<=nb;i++)
			{
				oc++;
			if(min>=elem)
			min=elem;
			if(oc>=nb)
			break;
			scanf("%d",&elem);
		}
		printf("le minimum de la suite est: %d \n",min);
	
	return 0;
}
