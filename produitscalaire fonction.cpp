/* ecrire un programme qui calcule le produit scalire de deux vecteurs d'entiers u et v de meme dimensions
ecrire la fonctio, suivante*/
#include<stdio.h>
#define MAX 50
long ProduitScalaire(int*,int*,int);
int main()
{
	/*declarer*/
	int u[MAX],v[MAX]; /* tableau de donnés*/
	int n; /*dimension*/
	int i; /*indice*/
	long PS; /*produit scalaire*/
	do
	{
		printf("intro dimension du tableau");
		scanf("%d",&n);
	}while(n>MAX);
	printf("****premier tableau****\n");
	for(i=0;i<n;i++)
	{
		printf("element %d :", i);
		scanf("%d",&u[i]);
	}
	printf("****deuxieme tableau****\n");
	for(i=0;i<n;i++)
	{
		printf("element %d:",i);
		scanf("%d",&v[i]);
	}
	PS = ProduitScalaire(u,v,n);
	printf(" produit scalaire est:%ld\n ",PS);
}
/*declaration fonction */
long ProduitScalaire(int*u, int*v, int n)
{
	long ps;
	int i;
	for(ps=0,i=0;i<n;i++)
	ps +=(long)u[i]*v[i];
	return ps;
}
