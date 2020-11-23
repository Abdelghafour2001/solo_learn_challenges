#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int price = 3000000;
    int cost = 2000000;
    int insurance = 1000000;
    int totalamonth = 10;
    int clientcount =0;
  //  printf("%d",price);
    scanf("%d", &clientcount);
    
    int totalPrice = ((cost*totalamonth)+insurance)-(price*clientcount);
    
	if (totalPrice > 0)
        printf("Loss");
    else if (totalPrice < 0)
        printf("Profit");
    else
        printf("Broke Even");
    
    return 0;
}
