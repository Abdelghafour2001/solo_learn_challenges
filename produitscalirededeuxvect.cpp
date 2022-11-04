#include<stdio.h>
int main()
{
	int i;
	int u[4]={1, 2, 3, 4};
	int v[4]={5, 6, 7, 8};
	int p=0;
	for(i=0; i<4; i++)
	{
		p=p+(u[i]*v[i]);
	}
	printf("le produit scalaire des deux vecteurs est: %d\n",p);
	return 0;
}
