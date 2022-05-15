#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

 char *prod;
 float price;
 bool in_cash;
 int op;
  
  prod = (char *)malloc(sizeof(char));


  printf("Product that you want: \n");
  gets(prod);

  printf("Product price: \n");
  scanf("%f", &price);

  printf("Press 1 for Pay in cash or 2 for pay with installments: ");
  
  scanf("%d", &op);
  while(op != 1 && op != 2){
    printf("Invalid, please type again...");
      scanf("%d", &op);
  }

  if(op == 1){
    in_cash = true;
    printf("In cash you have 10 percent off, so total is: $$ %.2f", (price - (price*0.1)));
  }else 
      if(op == 2){
        in_cash = false;
        printf("With installments you don't have discount, so total is: $$ %.2f", price);
      }

  free(prod);
  return 0;
}
