#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int fact(int n)
 {
 	int i;
 	double f;
 	if(n==0 || n==1)
 	{
 		f=1;
	}
	else
	{
		f=1;
		for(i=2;i<=n;i++)
		{
			f=f*i;
		}
	}
	return f;
 }
 double puiss(double x,int n)
 {
 	int i;
 	double p;
 	p=pow(x,n);
	 return p;
 }
 int main()
 {
 	double x,s=0;
 	int i,n;
 	printf("intro X\n");
 	scanf("%lf",&x);
 	printf("intro N\n");
 	scanf("%d",&n);
 	for(i=0;i<=n;i++)
 	{
 		s=s+(puiss(x,i)/fact(i));
	 }
	 printf("la somme est :%lf\n",s);
	 return 0;
 }
