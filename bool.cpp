#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<windows.h>
bool tr,exp;
int num_serv,numserv;
char nom[20];
char prenom[20];
char adresse[20];
char rep;
FILE *fser=NULL;
FILE *fser2=NULL;

//ajout
void ajouterserveur(FILE *fser)
{
	tr=false;
	do{
	printf("***************ajout d un serveur*****************\n");
	fser=fopen("D:\\serveur.txt","r");
	printf("intro le num du serveur a ajouter\n");
	scanf("%d",&numserv);
	while(!feof(fser) && tr==false)
	{
		fscanf(fser,"%d %s %s %s %s",&num_serv,&nom,&prenom,&adresse,&exp);
		if(numserv==num_serv)
		{
			tr=true;
		}
	}
	if(tr==true)
	{
		printf("existe deja\n");
	}	

}while(tr!=false);
	fclose(fser);
fser=fopen("D:\\serveur.txt","a");
printf("intro le nom du serveur\n");
scanf("%s",&nom);
printf("intro le prenom du serveur\n");
scanf("%s",&prenom);
printf("intro l adresse du serveur\n");
scanf("%s",&adresse);
printf("le serveur a t il de l experience? o-n\n");
scanf("%s",&rep);
if(rep=='o')
{
	exp=true;
}
else
{
	exp=false;
}
num_serv=numserv;
	fprintf(fser,"%d %s %s %s %d",num_serv,nom,prenom,adresse,exp);
	fclose(fser);
	system("cls");
}
	//modification
void modification(FILE *fser)
{
	int nums;

	printf("intro le numero du serveur a modifier\n");
	scanf("%d",&nums);
	fser=fopen("D:\\serveur.txt","r");
	fser2=fopen("D:\\serveur2.txt","w");
	tr=false;
	while(!feof(fser) && tr==false)
	{
		fscanf(fser,"%d %s %s %s %d",&num_serv,&nom,&prenom,&exp);
		if(nums==num_serv)
		{
			printf("intro le nouveau nom\n");
			scanf("%s",&nom);
			printf("intro le nouveau prenom\n");
			scanf("%s",&prenom);
			printf("intro la nouvelle adresse\n");
			scanf("%s",&adresse);
			printf("le serveur a t il de l experience? o-n");
scanf("%c",rep);
if(rep=='o')
{
	exp=true;
}
else
{
	exp=false;
}
fprintf(fser2,"%d %s %s %s %d\n",num_serv,nom,prenom,exp);
		}
		else
		{
			fprintf(fser2,"%d %s %s %s %d\n",num_serv,nom,prenom,exp);
		}
		tr=true;
	}
	fclose(fser);
	fclose(fser2);
	remove("D:\\serveur.txt");
	rename("D:\\serveur2.txt","D:\\serveur.txt");
	system("cls");
}
void nouvelle(FILE *fser)
{

	fser=fopen("D:\\serveur.txt","w");
printf("***************creation de liste******************\n");
printf("intro le num du serveur\n");
scanf("%d",&num_serv);
printf("intro le nom du serveur\n");
scanf("%s",&nom);
printf("intro le prenom du serveur\n");
scanf("%s",&prenom);
printf("intro l adresse du serveur\n");
scanf("%s",&adresse);
printf("le serveur a t il de l experience? o-n\n");
scanf("%s",&rep);
if(rep=='o')
{
	exp=true;
}
else
{
	exp=false;
}
	fprintf(fser,"%d %s %s %s %d\n",num_serv,nom,prenom,adresse,exp);
	fclose(fser);
	system("cls");
}
void afficher(FILE *fser)
{
	fser=fopen("D:\\serveur.txt","r");
	if(fser!=NULL)
	{
		while(!feof(fser))
	{
		fscanf(fser,"%d %s %s %s %s",&num_serv,&nom,&prenom,&adresse,&exp);
		printf("le num : %d \n",num_serv);
		printf("le nom : %s \n",nom);
		printf("le prenom : %s\n",prenom);
		printf("l adresse : %s \n",adresse);
		printf("l experience : %s");
}
}
}
int main()
{
	int reponse;

do{

	printf("***********liste***************\n");
	printf("0-creer nouvelle liste\n");
	printf("1-ajouter un serveur\n");
	printf("2-modifier les info d un serveur\n");
	printf("3-supprimer un serveur\n");
	printf("4-rechercher un serveur par num\n");
	printf("5-rechercher un serveur par nom\n");
	printf("6-supprimer les serveurs n ayant aucune experience\n");
	printf("7-quitter\n");
	printf("99-afficher\n");
	printf("intro votre choix.\n");
	scanf("%d",&reponse);
	switch(reponse)
	{
		case 0:
			nouvelle(fser);
			break;
		case 1:
		ajouterserveur(fser);
		break;
		case 2:
			modification(fser);
			break;
			case 99:
				afficher(fser);
				break;
									default:
										printf("error");
										break;
	}

}while(reponse!=7);
	return 0;
}
