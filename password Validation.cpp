#include<stdio.h>
#include<string.h>

int main(){
    
 int i, n=0, m=0;
 char s[30];
 scanf("%s",s);
 if(strlen(s) >= 7){
     
   for(i=0; s[i]!='\0'; i++){
      if(s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='&'||s[i]=='*'||s[i]=='!'||s[i]=='@')
          ++n;

      if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
          ++m;
   }
 }

 if(n>=2 && m>=2)
   printf("Strong");
  else
    printf("Weak");
    
 return 0;
}
