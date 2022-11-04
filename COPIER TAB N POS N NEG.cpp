#include <stdio.h>
#define MAX 50
main()
{
/* Déclarations */
int T[MAX], TPOS[MAX], TNEG[MAX];  /* Les tableaux et leurs dimensions */
int N,M, Npos,   NNEG;   int I; /* indice courant */
/* Saisie de la dimension */
do {
printf("Dimension du tableau (max.%d) : ",MAX);
scanf("%d", &N );
}
while(N>MAX) ;
/* Saisie des données */
SaisirTableau(T,N) ;

/* Affichage du tableau */
AfficherTableau(T,N) ;

/*Tasser les elements du tableau */
M = TasserTableau(T,N) ;
/* Trier le tableau */
Npos = TrierTableau(T,TPOS,TNEG,M) ;
/* Edition des resultats */
printf("Elements positifs : \n") ;
AfficherTableau(TPOS,Npos) ;
printf("Elements négatifs : \n") ;
AfficherTableau(TNEG,N-Npos) ;
}
int TrierTableau(int *T, int *TPOS, int *TNEG, int N) {
int npos=0, nneg=0;  int i ;
/* Transfert des données */
for (i=0; i<N; i++)
{
if (T[i]>0)
{
TPOS[npos]=T[i];
npos++;
}
if (T[i]<0)
{
TNEG[nneg]=T[i];
nneg++;
}
}
return npos ; }

