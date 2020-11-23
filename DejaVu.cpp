#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int i=0,j=0;
	bool tr;
	char string[50];
	scanf("%s",string);
	
	int size=strlen(string);
	for(i=0; i<size-1;i++)
	{
		for(j=1;i<size-i;j++)
		{
			if(string[i] == string[j + i])
                {
                tr=true;
				}
		}
	}
	if(tr==true)
	printf("Deja Vu");
	else printf("Unique");
	 return 0;
}
