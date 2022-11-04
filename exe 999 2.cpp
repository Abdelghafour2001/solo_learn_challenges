#include<stdio.h>
int main()
{
	int t[20];int i=0;int x;
	printf("intro les elements du tableau");
	scanf("%d",&x);
	while(x!=999)
	{
		t[i]=x;
		scanf("%d",&x);
		i++;
	}
	//q1
	int n=i-1;
	printf("le nombre d'elements du tableau est %d \n",n);
int j=1;
	for(i=n-1;i>=0;i--)
	{
		t2[j]=t[i];
		j++;
	}
	//q2
	printf("les elements du tab dans l ordre inverse\n");
	for( int j=i-1; j>=0;j--)
	{
		if(t[j]>0)
		printf("%d\n",t[j]);
	}
	//q3
	int nb=i;
	int c;
	int k=0;
	printf("le nombre d elements du tab est %d\n",nb);
	for(i=0;i<nb;j++)
	{
		c=0;
		if(t[i]==t[j])
		c++;
	}
	}
	t2[k]=c;
	k++;
	for(i=0; i<k; i++)
	{
		printf("element t[%d] est repete %d fois \n",i,t2[i]);
		
	}
	return 0;
}
