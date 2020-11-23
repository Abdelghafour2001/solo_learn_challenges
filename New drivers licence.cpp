#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct others{
	char nom[50];
};


int main() 
{
struct others t[5];
char S[50];
char myname[50];
int i,j,n, pos=0;
scanf("%s",myname);
strcpy(t[0].nom,myname);

scanf("%d",&n);


for(i=1;i<5;i++)
scanf("%s",t[i].nom);
//// triage 
for(i=0;i<5;i++)
{
	for(j=i;j<5;j++)
	{
		if(strcmp(t[i].nom,t[j].nom)==1)
		{
			
			strcpy(S,t[i].nom);
	
			strcpy(t[i].nom,t[j].nom);
		
			strcpy(t[j].nom,S);
		}
	}
}
for(i=0;i<5;i++)
{
		if(strcmp(t[i].nom,myname)==0)
		{
			pos=i;
		}
}

if(n==1)
printf("%d",20*(pos+1));
if(n>=2&&n<5)
printf("%d",20*(pos/n)+20);
if(n>=5)
printf("20");
/*
for(i=0;i<5;i++)
{
	printf("%s\t",t[i].nom);
}
printf("%d",pos);*/
    return 0;
}
