/*dessiner un trangle isocele inverse*/
#include <stdio.h>
int main()
{
  int i, j, ligne, s;
  printf("Entrez le nombre de lignes: ");
  scanf("%d",&ligne); 
  printf("\n");
  
  for(i=ligne; i>=1; i--)
  {
    for(j=1; j<=s; j++) 
      printf(" ");
    
    for(j=1; j<=i; j++) 
      printf("*");
    
    for(j=i-1; j>=1; j--)
      printf("*");
    
    printf("\n");
    s++;
  }
  
  return 0;
}
