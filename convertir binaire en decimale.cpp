#include<stdio.h>
#include<math.h>
	long puissance(int x, int y)
{
	int i,p;
	p=x;
	for (i=2; i<=y; i++)
	{
		p=p*x;
	}
	return p;
}

int convert(long long n);
int main() {
    long long n;
    printf("Entrer un nbre binaire: ");
    scanf("%lld", &n);
    printf("%lld en binaire = %d en decimal", n, convert(n));
    return 0;
}
int convert(long long n) {
    
    int decimal_val = 0, base = 1, rem;
    while (n > 0)
    {
        rem = n % 10;
        decimal_val = decimal_val + rem * base;
        n = n / 10 ;
        base = base * 2;
    }
    return decimal_val;
}
