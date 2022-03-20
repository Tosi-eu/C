#include <stdio.h>
#include <stdlib.h>

int main(){

float Prod[15], *pProd;

for(int i = 0; i < 15; i++){
    scanf("%f", &Prod[i]); //Valores do vetor //
}
for(int i = 0; i < 15; i++){
    pProd = &Prod[i];
    *pProd += *pProd * 0.0478;
    printf("valor na posicao %d: %.2f\n",i+1, *pProd);
}


system("pause");
return 0;
}

