#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct personne{
	char nom[30];
	char prenom[30];
	int num;

};
int main()
{
	personne t[4];
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("intro le nom du persone %d \n",i+1);
		scanf("%s",&t[i].nom);
		printf("intro le prenom du personne %d \n",i+1);
		scanf("%s",&t[i].prenom);
		t[i].num=i+1;
	}

	personne S;
for(i=0;i<4;i++)
{
	for(j=i;j<4;j++)
	{
		if(strcmp(t[i].nom,t[j].nom)==1)
		{
			S=t[i];
			t[i]=t[j];
			t[j]=S;
		}
	}
}
for(i=0;i<4;i++)
{
	printf("%s %s %d\n",t[i].nom,t[i].prenom,t[i].num);
}
return 0;
}
