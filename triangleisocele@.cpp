#include <stdio.h>

int main()
{
    int i, j=0, s, n;	
    printf("Entrez le nombre de lignes");
    scanf("%d",&n);
	
    for(i=1; i<=n;i++)
    {
    	j=0;
        for(s=1; s<=n-i;s++)
        {
            printf("  ");
        }
        while(j != 2*i-1)
        {
            printf("@ ");
            j++;
        }
        printf("\n");
    }
    
    return 0;
}
