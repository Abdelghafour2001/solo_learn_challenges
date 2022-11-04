void SaisirTableau (int *Tab, int N) ;
void AfficherTableau(int *Tab, int N) ;
int TasserTableau(int *Tab , int N) ;
#include <stdio.h>
#define MAX 50
void SaisirTableau(int *, int ) ;
void AfficherTableau(int *, int) ;
int TasserTableau(int *, int) ;
main() {
/* Déclarations */
int T[MAX]; /* tableau donné    */
int N,M;     /* dimension        */
/* Saisie de la dimension */
do {
printf("Dimension du tableau (max.%d) : ",MAX);
scanf("%d", &N );
}while(N>MAX) ;
/* Saisie des données */
SaisirTableau(T,N) ;
/* Affichage du tableau */
AfficherTableau(T,N) ;
/*Tasser les elements du tableau */
M = TasserTableau(T,N) ;
/* Edition des résultats */
AfficherTableau(T ,M) ;
}
void SaisirTableau(int *Tab, int N)
{  
int i ;
for (i=0; i<N; i++)
{
printf("Elément %d : ", i);
scanf("%d", &Tab[i]);
}
}
void AfficherTableau(int *Tab, int N)
{
int i ; printf("Tableau donné : \n");
for (i=0; i<N; i++)
printf("%d ", Tab[i]);
printf("\n"); 
}
int TasserTableau(int * Tab, int N)
{
int i,j ;
/* Effacer les zéros et comprimer :        */
/* Copier tous les éléments de i vers j et */
/* augmenter j pour les éléments non nuls. */
for (i=0, j=0 ; i<N ; i++)
{
Tab[j] = Tab[i] ;
if (Tab[i])
j++ ;
}
}

