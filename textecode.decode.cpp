#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void coder();
void decoder();



int main(int argc, char *argv[])
{
  int continuer = 1;
  long truc_a_faire = 0;
 
 while (continuer)
{
 
  printf("Que souhaitez-vous faire ?\n\n");
  printf("1.Coder un message\n");
  printf("2.Decoder un message\n\n");
  printf("Entrez le numero correspondant : ");
  scanf("%ld", &truc_a_faire);
  printf("\n");
  switch (truc_a_faire)
  {
         case 1:
               coder();
         break;
         case 2:
               decoder();
         break;
         
         default:
                 printf("Non, j'avais demande un nombre entre 1 et 2...\n");
                 break;
   }
 
 printf("\nVoulez-vous effectuer autre chose ?\n\n");
 printf("1. Oui\n");
 printf("2. Non\n");
 scanf("%ld", &continuer);
 
 if(continuer == 2)
 {
              continuer = 0;
 }
}
   
  system("PAUSE");     
  return 0;
 

}

void coder()
{   
     char texte_a_coder [100] = {0}, texte_code [100] = {0};
     long i = 0, pas1 = 0, pas2 = 0, pas3 = 0;
     char cle1 [1], cle2 [1], cle3[1];
     
  printf("Quelle est la clef numero 1 ?\n");
  scanf("%s", &cle1);
 
  pas1 = cle1[0] - 65;
 
  printf("Quelle est la clef numero 2 ?\n");
  scanf("%s", &cle2);
 
  pas2 = cle2[0] - 65;
 
  printf("Quelle est la clef numero 3 ?\n");
  scanf("%s", &cle3);
 
  pas3 = cle3[0] - 65;
 
  printf("\nEntrez votre texte a coder sans espace et en majuscule : \n");
  scanf("%s", texte_a_coder);
 

 
  for(i = 0; i < strlen(texte_a_coder); i++)
  {
        texte_code[i] = texte_a_coder[i] + pas1;
       
        if(texte_code[i] > 90 && texte_code[i] <= 116)
        {
                         
                         texte_code[i] = texte_code[i] - 26;
                         
        }
        texte_code[i] = texte_code[i] + pas2;
       
        if(texte_code[i] > 90 && texte_code[i] <= 116)
        {
                         
                         texte_code[i] = texte_code[i] - 26;
                         
        }
       
        texte_code[i] = texte_code[i] + pas3;
       
        if(texte_code[i] > 90 && texte_code[i] <= 116)
        {
                         
                         texte_code[i] = texte_code[i] - 26;
                         
        }
        pas1++;
 
        if(pas1 > 25)
        {
               pas1 = pas1 - 26;
               pas2++;
        }
        if(pas2 > 25)
        {
                pas2 = pas2 - 26;
                pas3++;
        }
        if(pas3 > 25)
        {
                pas3 = pas3 - 26;
               
        }
  }
 
   
    printf("\nVotre texte code est : %s\n", texte_code);
}

void decoder()
{    char texte_a_decoder [127] = {0}, texte_decode [127] = {0};
     long i = 0, pas1 = 0, pas2 = 0, pas3 = 0;
     char cle1 [1], cle2[1], cle3[1];
     
     printf("Quelle est la clef numero 1 ?\n");
     scanf("%s", &cle1);
   
     pas1 = cle1[0] - 65;
     
     printf("Quelle est la clef numero 2 ?\n");
     scanf("%s", &cle2);
     
     pas2 = cle2[0] - 65;
   
     printf("Quelle est la clef numero 3 ?\n");
     scanf("%s", &cle3);
 
     pas3 = cle3[0] - 65;
 
     printf("\nEntrez votre texte a decoder sans espace et en majuscule : \n");
     scanf("%s", texte_a_decoder);
     
     for(i = 0; i < strlen(texte_a_decoder); i++)
  {
        texte_decode[i] = texte_a_decoder[i] - pas1;
       
        if(texte_decode[i] < 65 && texte_decode[i] >= 39)
        {
                         texte_decode[i] = texte_decode[i] + 26;
        }
       
        texte_decode[i] = texte_decode[i] - pas2;
       
        if(texte_decode[i] < 65 && texte_decode[i] >= 39)
        {
                         texte_decode [i] = texte_decode[i] + 26;
        }
       
        texte_decode[i] = texte_decode[i] - pas3;
       
        if(texte_decode[i] < 65 && texte_decode[i] >= 39)
        {
                         texte_decode [i] = texte_decode[i] + 26;
        }
        pas1++;
 
        if(pas1 > 25)
        {
               pas1 = pas1 - 26;
               pas2++;
        }
        if(pas2 > 25)
        {
                pas2 = pas2 - 26;
        }
        if(pas3 > 25)
        {
                pas3 = pas3 - 26;
               
        }
  }
   printf("\nVotre texte decode est : %s\n", texte_decode); 
} 
