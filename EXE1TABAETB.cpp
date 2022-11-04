#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m;
	int *A,*B;
	int x;
	printf("introduire la taille du tableau A\n");
	scanf("%d",&n);
	A=(int*)malloc(sizeof(int)*n);
	for(x=0;x<n;x++)
	{
		printf("intro lelement %d du tab A\n",x+1);
		scanf("%d",&A[x]);
	}
	printf("introduire la taille du tableau B\n");
	scanf("%d",&m);
	B=(int*)malloc(sizeof(int)*m);
	for(x=0;x<m;x++)
	{
		printf("intro lelement %d du tab B\n",x+1);
		scanf("%d",&B[x]);
	}
	printf("le tab A:\n");
	for(x=0;x<n;x++)
	{
		printf(" %d ",A[x]);
	}
		printf("\n");

		printf("le tab B:\n");
	for(x=0;x<n;x++)
	{
		printf(" %d ",B[x]);
	}
		printf("\n");
	int k=n+m;
int	j=0;
	A=(int*)realloc(A,sizeof(int)*(k));
	for(x=n;x<k;x++)
	{
		A[x]=B[j];
		j++;
	}
	for(x=0;x<k;x++)
	{
		printf(" %d ",A[x]);
	}
	printf("\n");
free(A);
free(B);
return 0;
}
