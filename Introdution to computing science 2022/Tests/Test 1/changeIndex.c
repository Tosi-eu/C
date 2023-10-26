#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int index_end = 15, aux, vet[16];

    // array values
    for(int i = 0; i < 16; i++){
        scanf("%d", &vet[i]);
    }

    printf("\n");

    // array before the change
    for(int i = 0; i < 16; i++){
        printf("%d ", vet[i]);
    }

    printf("\n");

    // swapping elements in array
    for(int i = 0; i < 8; i++){
        aux = vet[i];
        vet[i] = vet[index_end];
        vet[index_end] = aux;
        index_end--;
    }

    // array modified
    for(int i = 0; i < 16; i++){
        printf("%d ", vet[i]);
    }

    printf("\n");
    
    return 0;
}
