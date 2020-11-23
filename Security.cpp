#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char input[50],output[50];
	int i=0,posT=0,posM=0,posG=0;
	scanf("%s",input);
	for(i=0;i < strlen(input); i++)
	{
		if(input[i]=='T')
		{
		posT=i;
		}
		if(input[i]=='$')
		{
		posM=i;
		}
		if(input[i]=='G')
		{
		posG=i;
		}
	}
	if(posG>posM && posG<posT || posG>posT && posG<posM)
	printf("quiet");
	else printf("ALARM");
	
	return 0;
}
