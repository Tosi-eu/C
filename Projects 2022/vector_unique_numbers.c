#include <stdio.h>
#include <stdlib.h>

int main(){

    int *vet, i, j, size;

    vet = (int *)malloc(size * sizeof(int));

    printf("Vector size: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++){
        scanf("%d", &vet[i]);
        for(j = 0; j < i ; j++){
            if(vet[i] == vet[j]){
                printf("Repeated, type any number different of %d: ", vet[i]);
                i--;
            }
        }
    }
    
    printf("\n");

     for(i = 0; i < size; i++){
        printf("%d ", vet[i]);
     }

    free(vet);
    return 0;
}