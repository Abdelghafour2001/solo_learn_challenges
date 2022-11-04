#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	int jour;
	int mois;
	int annee;
}Date;
typedef struct {
	char nom[20];
	char prenom[20];
	int age;
	Date date_adhesion;
}Personne;
Personne saisir(int i)
{
	Personne P;
	printf("entrer le nom\n");
	scanf("%s",&P.nom);
	printf("entrer le prenom \n");
	scanf("%s",&P.prenom);
	printf("intro l age \n");
	scanf("%d",&P.age);
	printf("entrer la date\n");
	printf("intro le jour\n");
	scanf("%d",&P.date_adhesion.jour);
	printf("intro le mois\n");
	scanf("%d",&P.date_adhesion.mois);
	printf("intro l annee\n");
	scanf("%d",&P.date_adhesion.annee);
	return P;
}
void triage()
{
	
}

int main()
{
	Personne Liste[150];
	int n;
	printf("intro le nbre de personnes a ajouter\n");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		Liste[i]= saisir(i);
	}
	
	
	return 0;
}
