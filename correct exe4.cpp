#include<stdio.h>
#include<math.h>

typedef struct {
	int x;
	int y;
} point;
int distance_point(point A,point B)
{
	int dcarre,Dist;
	dcarre=pow(A.x-B.x,2)+pow(A.y-B.y,2);
	Dist=sqrt(dcarre);
	return Dist;
}
int main()
{
	point A;
	point B;
	point C;
	printf("intro l abscisse de A\n");
	scanf("%d",&A.x);
	printf("intro l ordonne de A\n");
	scanf("%d",&A.y);
	printf("intro l abscisse de B\n");
	scanf("%d",&B.x);
	printf("intro l ordonne de B\n");
	scanf("%d",&B.y);	
	printf("intro l abscisse de C\n");
	scanf("%d",&C.x);
	printf("intro l ordonne de C\n");
	scanf("%d",&C.y);
	printf("les distances sont\n");
	printf("DISTANCE A(%d,%d) et B(%d,%d) est : %d\n",A.x,A.y,B.x,B.y,distance_point(A,B));
	printf("DISTANCE A(%d,%d) et C(%d,%d) est : %d\n",A.x,A.y,C.x,C.y,distance_point(A,C));
	printf("DISTANCE C(%d,%d) et B(%d,%d) est : %d\n",C.x,C.y,B.x,B.y,distance_point(C,B));
	if (distance_point(A,B)==distance_point(A,C) && distance_point(A,B)==distance_point(B,C))
	printf("ce triangle est isocele\n");
	else
	printf("ce trangle n est pas isocele\n");
	return 0;
}
