#include<stdio.h>
void remplirtab(void);
void affichagetab(void);
int t[50][50];
int l,c;
int main()
{
	long som;
	printf("nbre de lignre (max.50):");
	scanf("%d",&l);
	printf("nbre de colonnes(max.50):");
	scanf("%d",&c);
	remplirtab();
	affichagetab();
	 som=0;
	for(int i=0; i<l;i++)
	{
		for( int j=0; j<c; j++)
		{
			som = som+ t[i][j];
		}
}
			printf(" somme des elements :%ld \n",som);
	return 0;
}
void remplirtab(void)
{
	int i,j;
	for(i=0;i<l;i++)
	{
	for(j=0;j<c;j++)
	{
	printf("element [%d][%d]\n",i,j);
	scanf("%d",&t[i][j]);
	}
}
}
void affichagetab(void)
{
	int i,j;
	printf(" tab donné:\n");
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d\t", t[i][j]);
		}
		printf("\n");
	}
}
