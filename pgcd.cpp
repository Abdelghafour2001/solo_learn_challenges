
#include<stdio.h>
#include<stdlib.h>
    
    static int pgdc(int a,int b ) {
         if (a==b)
            return a ;
        else
        {if(a>b)
            return pgdc(a-b,b);
         else
            return pgdc(a,b-a);
        }
      }
   int main (){
        int x,y,z;
        int pdc;
        printf("Saisir 3 entiers x,y,z :\n");
       scanf("%d%d%d",&x,&y,&z);
       pdc = pgdc(pgdc(x,y),z);
       printf("Le PGDC des 3 entiers saisis est %d\n",pdc);
       system("pause");
       return 0;
     }	

