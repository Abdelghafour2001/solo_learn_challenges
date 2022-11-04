#include <stdio.h>
#include <math.h>
main() {
/* Calcul des solutions réelles et complexes d'une équation du second degré */
int A, B, C;
double D;
/* Discriminant */

printf("Calcul des solutions réelles et complexes d'une équation du second \n");
printf("degré de la forme   ax^2 + bx + c = 0 \n\n");
printf("Introduisez les valeurs pour a, b, et c : ");
scanf("%i %i %i", &A, &B, &C);

/* Calcul du discriminant b^2-4ac */
D = pow(B,2) - 4.0*A*C;
/* Distinction des différents cas */
if (A==0 && B==0 && C==0) /* 0x = 0 */
printf("Tout réel est une solution de cette équation.\n");
else if (A==0 && B==0)
/* Contradiction: c # 0 et c = 0 */
printf("Cette équation ne possède pas de solutions.\n");
else if (A==0) /* bx + c = 0 */
{
printf("La solution de cette équation du premier degré est :\n");
printf(" x = %.4f\n", (double)C/B);
}


else if (D==0) /* b^2-4ac = 0 */
{
printf("Cette équation a une seule solution réelle :\n");
printf(" x =  %.4f\n", (double)-B/(2*A));      }  
 else /* b^2-4ac > 0 */
{
printf("Les solutions réelles de cette équation sont :\n");
printf(" x1 = %.4f\n", (double)(-B+sqrt(D))/(2*A));
printf(" x2 = %.4f\n", (double)(-B-sqrt(D))/(2*A));
}
return 0;
}

