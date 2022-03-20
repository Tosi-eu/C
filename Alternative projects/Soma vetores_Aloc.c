#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma_ab(int *vetA, int *vetB, int tam){
    int *vetC = (int*) calloc(tam, sizeof(int));

    for(int i = 0; i < tam; i++){
        vetC[i] = vetB[i] + vetA[i];
    }
    return vetC;
}

int main(){

int tam, *pvA, *pvB, *pvC;

pvA = (int*) calloc(tam, sizeof(int));
pvB = (int*) calloc(tam, sizeof(int));

printf("Tamanho dos vetores: ");
scanf("%d", &tam);

  printf("\n");

for(int i = 0; i < tam; i++){
    printf("Valores do vetor A: ");
    scanf("%d", &pvA[i]);
}
  printf("\n");

for(int i = 0; i < tam; i++){
    printf("Valores do vetor B: ");
    scanf("%d", &pvB[i]);
}
  printf("\n");

pvC = soma_ab(pvA, pvB, tam);

for(int i = 0; i < tam; i++){
    printf("%d ", pvC[i]);
}

free(pvA);
free(pvB);
free(pvC);

return 0;
}
