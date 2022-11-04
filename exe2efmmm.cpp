#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char i;
	char mot[20],mot2[20];
 	int t[26];
	int j=65;
	for(i=0;i<26;i++)
	{
	t[i]=j;
		j++;
	}
	for(i=0;i<26;i++)
	{
	printf("%c",t[i]);
	}
	printf("\n");
	char p;
	int t2[26];
	int m=70;
	for(p=0;p<=20;p++)
	{
	t2[p]=m;
		m++;
	}
	int k=65;
	for(p=21;p<26;p++)
	{
	t2[p]=k;
		k++;
	}
		for(p=0;p<26;p++)
	{
	printf("%c",t2[p]);
	}
	printf("\n introduire un mot\n");
	scanf("%s",&mot);
	strlen(mot);
	int o=0;
	while(mot[o]!='\0')
	{
		mot[o]=toupper(mot[o]);
		o++;
		
	}
	printf("\n%s\n",mot);
	o=0;
	while(mot[o]!='\0')
	{
		for(i=0;i<26;i++)
		{
		if(mot[o]==t[i])
		{
		//	printf("%c",t[i+5]);
			mot2[o]=t2[i];
		}
		}
		o++;
	}
	printf("%s\n",mot2);
	

	return 0;
}
