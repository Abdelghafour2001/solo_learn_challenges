#include<stdio.h>
int main()
{
	int T1[10],T2[10];
	int i,c,j;
	for(i=1;i<=10;i++)
	{
		printf("introduire un element ");
		scanf("%d",&T1[i]);
	}
	for(i=1;i<=10;i++){
		c=0;
		for(j=1;j<=10;j++)
		{
			if(T1[i]>T2[j])
			{
				c++;
			}
		}
		c++;
	
	while(T2[c]==T1[i]){
		c++;
	}
	T2[c]=T1[i];
}
for(i=1;i<=10;i++){
	printf("%d \t",T2[i]);
}
}
