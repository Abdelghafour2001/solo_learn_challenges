#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	int *A;
	int e;
	bool inversion;
	printf("introduire la taille du tableau A\n");
	scanf("%d",&n);
	A=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("intro lelement %d du tab A\n",i+1);
		scanf("%d",&A[i]);
	}
	int x;
	do{
		inversion=false;
		for(i=0;i<n;i++)
		{
			if(A[i]>A[i+1])
			{
				inversion=true;
				x=A[i];
				A[i]=A[i+1];
				A[i+1]=x;
			}
		}
	}while(inversion!=false);
		for(i=0;i<n;i++)
	{
		printf(" %d ",A[i]);
	}
	printf("\n");
	printf("intro l element a inserer \n");
	scanf("%d",&e);
	int p=0;
	A=(int*)realloc(A,sizeof(int)*(n+1));
	A[n+1]=A[n];
		for(i=0;i<n;i++)
		{
			if(e==A[i])
			p=i;
		}
		for(i=n;i<n+1;i--)
		{
			A[i]=A[i-1];
		}
		A[p]=e;
		for(i=0;i<n;i++)
	{
		printf(" %d ",A[i]);
	}
	free(A);
	return 0;
	
}
