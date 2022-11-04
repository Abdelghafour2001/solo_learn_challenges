#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int *t;
	int x;
	printf("introduire la taille du tableau\n");
	scanf("%d",&n);
	t=(int*)malloc(sizeof(int)*n);
	for(x=0;x<n;x++)
	{
		printf("intro un nbre\n");
		scanf("%d",&t[x]);
	}
		for(x=0;x<n;x++)
	{
		printf(" %d ",t[x]);
	}
	int y,p;
	printf("\n introduire la position de l element à supprimer\n");
	scanf("%d",&y);
	int j=1;
while(j<=n)		
	{	
		if(j==y)
		{
			for(x=j;x<=n-1;x++)
			{
				t[x]=t[x+1];
			}
			n=n-1;
				t=(int*)realloc(t,sizeof(int)*(n));
		}
		else
		{
			j++;
		}
	}
	for(x=0;x<n;x++)
	{
		printf(" %d ",t[x]);
	}
	free(t);
	return 0;
}
