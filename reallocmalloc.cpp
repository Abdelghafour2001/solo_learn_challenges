#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int *t;
	int x;
	printf("intro la taille du tableau\n");
	scanf("%d",&n);
	t=(int *)malloc(sizeof(int)*n);
	for(x=0;x<n;x++)
	{
		printf("intro l element %d du tableau\n",x+1);
		scanf("%d",&t[x]);
	}
	for(x=0;x<n;x++)
	{
		printf("%d\t",t[x]);
	}
	printf("\n");
	int y,p;
	printf("intro l element a supprimer\n");
	scanf("%d",&y);
/*	printf("intro sa position\n");
	scanf("%d",&p);
	p=p-1;
	t=(int*)realloc(t,sizeof(int)*(n+1));
	t[n+1]=t[n];
	for(x=n;x>=1+p;x--)
	{
		t[x]=t[x-1];
	}	t[p]=y;*/
	int j=0;
	while(j<=n)
	{
		if(t[j]==y)
		{
			for(x=j;x<=n-1;x++)
			{
				t[x]=t[x+1];
			}
			n=n-1;
			t=(int*)realloc(t,sizeof(int)*n);
		}
		else {j++;
		}
	}

		for(x=0;x<n;x++)
	{
		printf("%d\t",t[x]);
	}
free(t);
	return 0;
}
