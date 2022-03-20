#include <stdio.h>
#include <stdlib.h>

 int *juntaAB(int *vet1, int *vet2, int tam) {

 int *vet3 = (int*)malloc(tam*2 * sizeof(int));

 for (int i=0; i<tam; i++) {
 vet3[i] = vet1[i];
 }
 for (int i=tam; i<tam*2; i++) {
 vet3[i] = vet2[i-tam];
 }
 return vet3;
 }

 int main(){

 int tam, *pv1, *pv2, *pv3;

 pv1 = (int*) calloc(tam, sizeof(int));
 pv2 = (int*) calloc(tam, sizeof(int));


 printf("Tamanho dos vetores: ");
 scanf("%d", &tam);

 printf("\n");

 for(int i = 0; i < tam; i++){
    printf("Valores do vetor 1: ");
    scanf("%d", &pv1[i]);
 }

 printf("\n");

 for(int i = 0; i < tam; i++){
    printf("Valores do vetor 2: ");
    scanf("%d", &pv2[i]);
 }

 printf("\n");

 pv3 = juntaAB(pv1, pv2, tam);

 for(int i = 0; i < tam*2; i++){
    printf("%d \n", pv3[i]);
 }

 free(pv1);
 free(pv2);
 free(pv3);

 return 0;
 }
