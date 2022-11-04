#include<stdio.h>
#include<stdlib.h>

int main(){
int T[10];
int i,c,p,min,k,j;
bool tr;
for( i=1;i<=10;i++)
{
printf("intro un element \n");
scanf("%d",&T[i]);
}
do{ tr=false;
for(i=1;i<10;i++){
	if(T[i]>T[i+1]){
		c=T[i];
		T[i]=T[i+1];
		T[i+1]=c;
		tr=true;
	}
}
}while(tr==true);
for(i=1;i<=10;i++){
	printf("%d \t",T[i]);
}
}
