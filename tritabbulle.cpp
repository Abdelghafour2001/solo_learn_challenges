/*triage tableau */
#include <stdio.h>
#define SIZE 10

int main()
{
  int tab[10] = { 4, -1, 8, 12, -6, 23, 2, 28, 24, 33};
  int i, j, tmp;
   for (i=0; i < SIZE; ++i)
   {
      printf("%d\t", tab[i]);
   }
 
  for (i=0 ; i < SIZE-1; i++)
  {
    for (j=0 ; j < SIZE-i-1; j++)
    {
      
      if (tab[j] > tab[j+1]) 
      {
        tmp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = tmp;
      }
    }
  }
 
  printf("\n******* tableau tri�e par ordre croissant *******\n");
   for (i=0; i < SIZE; ++i)
   {
      printf("%d\t", tab[i]);
   }
 
  return 0;
}
