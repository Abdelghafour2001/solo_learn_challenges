#include <stdio.h>
main()
{
 /* D�clarations */
 int A[50]; /* tableau donn� */
 int N;     /* dimension     */
 int I;     /* rang � partir duquel A n'est pas tri� */
 int J;     /* indice courant      */
 int AIDE;  /* pour la permutation */
 int PMAX;  /* indique la position de l'�l�ment */
            /* maximal � droite de A[I]         */

 /* Saisie des donn�es */
 printf("Dimension du tableau (max.50) : ");
 scanf("%d", &N );
 for (J=0; J<N; J++)
    {
     printf("El�ment %d : ", J);
     scanf("%d", &A[J]);
    }
 /* Affichage du tableau */
 printf("Tableau donn� :\n");
 for (J=0; J<N; J++)
    printf("%d ", A[J]);
 printf("\n");

/* Tri du tableau par s�lection directe du maximum. */
 for (I=0; I<N-1; I++)
     {
      /* Recherche du maximum � droite de A[I] */
      PMAX=I;
      for (J=I+1; J<N; J++)
          if (A[J]>A[PMAX]) PMAX=J;
      /* Echange de A[I] avec le maximum */
      AIDE=A[I];
      A[I]=A[PMAX];
      A[PMAX]=AIDE;
     }
 
  /* Edition du r�sultat */
 printf("Tableau tri� :\n");
 for (J=0; J<N; J++)
     printf("%d ", A[J]);
 printf("\n");
 return 0;
}

