#include <stdio.h>
#include <locale.h>

void Maiores(int *vet, int *pmaior, int *pmaior2){
    int aux;
    for(int i = 0; i<4;i++){
        for(int j = i+1; j < 4;j++){
            if(vet[i] < vet[j]){
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }
    }
}
    *pmaior = vet[0];
    *pmaior2 = vet[1];
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int vetor[4], maior, maior2;

    for(int i = 0; i < 4;i++){
         scanf("%d", &vetor[i]);
    }

    Maiores(vetor, &maior, &maior2);

    printf("\nO primeiro maior elemento será: %d", maior);
    printf("\n\n");
    printf("O segundo maior elemento será: %d\n", maior2);

return 0;
}
