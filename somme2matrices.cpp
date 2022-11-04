#include<stdio.h>
int main()
{
	int i,j;
	typedef int matrice[3][2];
	matrice A={1 , 2 , 3 , 4 };
	matrice B={5 , 6 , 7 , 8 };
	matrice C;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			C[ i ][ j ]=A[ i ][ j ]+B[ i ][ j ];
			printf(" %d\t ",C[ i ][ j ]);
		}
		printf("\n");
	}
	return 0;
}
