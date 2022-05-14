#include <stdio.h>
#include <stdlib.h>

int main(){

  float cost = 0.0, total = 0.0, *vec;
  int op, i = 0;
  char prod[50];

  FILE *arq = fopen("bills.txt", "wa");
  vec = (float *)malloc(sizeof(float));

  if(arq == NULL){
    printf("ERROR!\n");
    exit(1);
  }

  while(1){

    printf("Product: \n");
    setbuf(stdin, NULL);
    gets(prod);

    printf("Price: \n");
    scanf("%f", &cost);

    vec[i] = cost;
    total += cost;
    
    while(cost <= 0){
      printf("Invalid value, type again...\n");
      scanf("%f, &cost");
    }

    printf("Continue <1/0>: ");
    scanf("%d", &op);

    while(op != 1 && op != 0){
      printf("Invalid value, type again...\n");
      scanf("%d", &op);
    }

    if(op == 1){
      fprintf(arq, "Product: %s\n", prod);
      fprintf(arq, "Price: R$ %.2f", cost);
      fprintf(arq, "\n\n");
      i++;
      continue;
    }else{
          fprintf(arq, "Product: %s\n", prod);
          fprintf(arq, "Price: R$ %.2lf", cost);
          fprintf(arq, "\n\n");
          fprintf(arq, "Total price: R$ %.2lf\n", total);
          fprintf(arq, "Prices order (R$): ");
          for(int size = 0; size <= i; size++){
            fprintf(arq, "%.2f ", vec[size]);
          }
          break;
    }

  }

  system("pause");
  fclose(arq);
  free(vec);
  return 0;
}
