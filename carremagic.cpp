#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,j=0,S=0,C=0,D1=0,D2=0;
	int M=0,F=0;
	int t[3][3];
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("intro l element %d de ligne %d du tableau\n",j+1,i+1);
		scanf("%d",&t[i][j]);
	}
	}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("%d \t",t[i][j]);
	}
	printf("\n");
	}
	
	int X=2;
	for(i=0;i<3;i++)
	{
		S=S+t[i][0];
	}
	printf("S est %d\n",S);
		for(i=0;i<3;i++)
	{
		C=C+t[0][i];
	
	}
		printf("C est %d\n",C);

		for(i=0;i<3;i++)
	{
		M=M+t[i][2];
	}
		printf("M est %d\n",M);
		

		for(j=0;j<3;j++)
	{
		F=F+t[2][j];
	}
		printf("F est %d\n",F);
		j=0;
		for(i=0;i<3;i++)
	{
		D1=D1+t[i][j];
		j++;
	}
		printf("D1 est %d\n",D1);

		for(i=0;i<3;i++)
	{
		D2=D2+t[i][X];
		X--;
	}
		printf("D2 est %d\n",D2);

	if(D1==D2&&D2==C&&C==F&&F==M&&M==S)
	{
		printf("ce carre est magic\n");
	}
	else
	{
		printf("ce carre n est pas magic\n");
	}
	return 0;
}
