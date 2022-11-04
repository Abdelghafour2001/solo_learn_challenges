#include <stdio.h>
#include <math.h>
int main()
{
	float a;
	float b;
	float s;
	float p;
	float d;
	printf("intro le 1er nbre\n");
	scanf("%f",&a);
	printf("intro le 2eme nbre\n");
	scanf("%f",&b);
	if (a>=0 && b>=0)
	{
	s=a+b;
	printf("la somme de ces deux nbres est:%f\n",s);
}
else if(a<0 && b<0)
{
	p=a*b;
	printf("leur produit est:%f\n",p);
}
else
{
 if(a>=0 && b<=0)
 {
d=a-b ;
}
else
 if(a<=0 && b>=0)
 {
d=b-a ;
}
printf("la difference est:%f\n",d);
}
return 0;
}
