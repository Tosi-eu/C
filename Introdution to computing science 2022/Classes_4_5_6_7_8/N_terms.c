#include <stdio.h>
#include <stdlib.h>

// THIS EXERCISE WAS MADE INITIALLY FOR PRINT ALL TERMS SQUARED BEFORE "n". I PREFERRED TO CREATING AN POINTER AND USE DINAMIC ALLOCATION FOR STORING ALL THESE TERMS.

int main(){

    int n, *vet;

    // criando vetor de tamanho n para alocar os enésimos termos
    vet = (int *)malloc(n * sizeof(int));

    // nésimo termo
    scanf("%d", &n);

    //laço for armezando i² no vetor
    for(int i = 1; i <= n; i++){
        vet[i] = i*i;
        printf("%d ", vet[i]);
    }


    free(vet);
    return 0;
}
