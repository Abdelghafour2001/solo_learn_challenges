#include <stdio.h>
#include <math.h>
main()
{
int XA, YA, XB, YB;
double DIST;

/* Attention: La chaîne de format que nous utilisons */
/* s'attend à ce que les données soient séparées par */
/* une virgule lors de l'entrée. */

printf("Entrez les coordonnées du point A :  XA,YA  ");
scanf("%d,%d", &XA, &YA);
printf("Entrez les coordonnées du point B :  XB,YB  ");
scanf("%d,%d", &XB, &YB);
DIST=sqrt(pow(XA-XB,2)+pow(YA-YB,2));
printf("La distance entre A(%d,%d) et B(%d, %d) est %.2f\n",XA, YA, XB, YB, DIST);
return 0;
}
