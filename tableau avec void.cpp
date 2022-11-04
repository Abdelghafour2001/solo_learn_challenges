#include <stdio.h>
void RemplirTableau(void) ;
void AfficherTableau(void) ;
int T[50][50];  /* tableau donné     */
int L, C, I, J;   /* dimensions           */

main() {
/* Déclarations */
long SOM;   /* somme des éléments - type long   */

/* Saisie des données */
printf("Nombre de lignes   (max.50) : ");
scanf("%d", &L );
printf("Nombre de colonnes (max.50) : ");
scanf("%d", &C );

RemplirTableau() ;

AfficherTableau() ;

/* Calcul de la somme  */
for (SOM=0, I=0; I<L; I++)
for ( J=0; J<C; J++)
SOM += T[I][J];
/* Edition du résultat */
printf("Somme des éléments : %ld\n", SOM);
return 0;
}
void RemplirTableau(void) {
int i,j ;

for (i=0; i<L; i++)
for (j=0; j<C; j++)
{
printf("Elément[%d][%d] : ",i,j);
scanf("%d", &T[i][j]);
}
}
void AfficherTableau(void)  {
int i,j ;
printf("Tableau donné :\n");
for (i=0; i<L; i++)
{
for (j=0; j<C; j++)
printf("%d\t", T[i][j]);
printf("\n");
}
}

