#include<stdio.h>
#include<string.h>

int main()
{
	char string[50], month[50],days[50];
	int i=0,j=0,k=0,m;
	
	gets(string);
	
	if(string[0] >='A' && string[0] <='Z')
	{
		for(k=0;string[k]!=' ';k++)
		{
			month[k]=string[k];
			
		}
		if(strcmp(month,"January")==0) m=1;
		else if (strcmp(month,"February")==0) m=2;
			else if (strcmp(month,"March")==0) m=3;
				else if (strcmp(month,"April")==0) m=4;
					else if (strcmp(month,"May")==0) m=5;
						else if (strcmp(month,"June")==0) m=6;
							else if (strcmp(month,"Jully")==0) m=7;
								else if (strcmp(month,"August")==0) m=8;
									else if (strcmp(month,"September")==0) m=9;
										else if (strcmp(month,"October")==0) m=10;
											else if (strcmp(month,"November")==0) m=11;
												else m=12;
	for(int p = ++k; string[p] !=','; p++,k++)

   	printf("%c",string[p]);
   	printf("/%d/",m);
   	k++;
   	for(int p = ++k; string[p] != '\0'; p++)
   	printf("%c",string[p]);
   	return 0;
	}
for( i = 0 ; string[i]!= '/'; i++ );
 i++;
 for(;string[i] != '/'; i++)
 {
   printf("%c",string[i]);
  }
  
  //
  printf("/");
  i++;
  //
 for(j=0;string[j] != '/'; j++)
{
  printf("%c",string[j]);
}
 printf("/");

 for(;string[i] != '\0'; i++)
{
printf("%c",string[i]);
}
return 0;

}
