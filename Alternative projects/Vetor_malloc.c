#include <stdio.h>
#include <stdlib.h>

int main()
 {
 int i, N, *vet;

 do {
 printf("Informe um valor N nao negativo:\n");
 scanf("%d", &N);
 if (N <= 0)
 printf("Valor invalido!\n");
 } while (N <= 0);

 vet = (int*) malloc(N * sizeof(int));


 for (i=0; i<N; i++) {
 do {
 printf("Informe o valor inteiro >= 2:\n");
 scanf("%d", &vet[i]);
 if (vet[i] < 2)
 printf("Esse valor não pode ser usado!\n");
 } while (vet[i] < 2);
 }

 for (i=0; i<N; i++) {
 printf("%d ", vet[i]);
 }
 free(vet);
 }
