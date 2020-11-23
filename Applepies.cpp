#include<stdio.h>
int main(){
	int applenum,totalpies;
	const int applesinpie=3;
	scanf("%d",&applenum);
	totalpies= (applenum/2)/applesinpie;
	printf("%d",totalpies);
	return 0;
}
