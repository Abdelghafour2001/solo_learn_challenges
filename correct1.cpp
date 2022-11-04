#include<stdio.h>

//Question a
int suite(int n){
	if(n == 1 || n == 2)
		return n;
		
	return (suite(n-1) * suite(n-2));
}

//Question b
void suite_produit(int n){
	int i, s, p = 1;
	if(n < 1){
		printf("Suite non definie pour le terme : %d \n", n);
	}
	else{
		for(i=1; i<=n; i++){
			s = suite(i);
			p = p * s;
			printf("U(%i) = %d\n", i, s);
		}
		printf("Le produit des termes : %d \n", p);
	}
}

//Question c
main(){
	int n, nb, i, t, s = 0;
	
	//Appel de la fonction a
	printf("Entrer un entier: ");
	scanf("%d", &n);
	s = suite(n);
	printf("U(%d) = : %d\n",n, s);
	
	//Appel de la fonction b
	printf("Entrer le nombre de termes: ");
	scanf("%d", &nb);
	suite_produit(nb);	
}

