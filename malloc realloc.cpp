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
	printf("\n introduire l'element à insérer\n");
	scanf("%d",&y);
	printf("introduire la position\n");
	scanf("%d",&p);
	p=p-1;	
	t=(int*)realloc(t,sizeof(int)*(n+1));
	for(x=n;x>=p;x--)
	{
		t[x]=t[x-1];
	}
	t[p]=y;
		for(x=0;x<n+1;x++)
	{
		printf(" %d ",t[x]);
	}
	free(t);
	return 0;
	
	
	
	
}
