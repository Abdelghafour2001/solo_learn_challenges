#include <stdio.h>
#include <math.h>
main()
{
int XA, YA, XB, YB;
double DIST;

/* Attention: La cha�ne de format que nous utilisons */
/* s'attend � ce que les donn�es soient s�par�es par */
/* une virgule lors de l'entr�e. */

printf("Entrez les coordonn�es du point A :  XA,YA  ");
scanf("%d,%d", &XA, &YA);
printf("Entrez les coordonn�es du point B :  XB,YB  ");
scanf("%d,%d", &XB, &YB);
DIST=sqrt(pow(XA-XB,2)+pow(YA-YB,2));
printf("La distance entre A(%d,%d) et B(%d, %d) est %.2f\n",XA, YA, XB, YB, DIST);
return 0;
}
