#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,k,L;
	printf("intro nbre de ligne et colonnes\n");
	scanf("%d",&L);
	int t[L][L];
	for(i=0;i<L;i++)
	{
		for(j=0;j<L;j++)
		{
			printf("intro l element %d %d\n",i+1,j+1);
			scanf("%d",&t[i][j]);
		}
	}
		for(i=0;i<L;i++)
	{
		for(j=0;j<L;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	j=0;
	int S=0;
	for(i=0;i<L;i++)
	{
		S=S+t[i][j];
		j++;
	}
	printf("somme de diagonale principale est %d\n",S);
	j=0;
	int som;
		for(i=0;i<L;i++)
	{
		for(k=0;k<j;k++)
		{
			som=som+t[i][k];
		}
		j++;
	}
	printf("somme est %d\n",som);
	if(som==0)
	{
		printf("matrice triangulaire\n");
	}
	else {
		printf("matrice non triangulaire\n");
	}
	return 0;
	
}
