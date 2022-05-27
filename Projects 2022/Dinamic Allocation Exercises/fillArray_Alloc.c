#include <stdio.h>
#include <stdlib.h>

int* fillArray(int n){

    int *vet;

    vet = (int*) malloc(n * sizeof(int));

    if(vet == NULL){
        printf("Nao foi possivel alocar memoria\n");
        exit(1);
    }
    for(int i = 0; i < n; i++)
        scanf("%d", &vet[i]);

    return vet;
}

int main(){

    int n, *vet;

    scanf("%d", &n);
    
    vet = fillArray(n);

    for(int i = 0; i < n; i++){
      printf("%d ", vet[i]);
    }

    free(vet);
    vet = NULL;

    return 0;
}
