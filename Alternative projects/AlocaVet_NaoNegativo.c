#include <stdio.h>
#include <stdlib.h>

int *aloca(int tam){

    int *vet;

    if(tam > 0){
        vet = (int*) calloc(tam, sizeof(int));
        return vet;
    }
    else
        return NULL;

}

int main(){

int *vet, x;

        scanf("%d", &x);

    vet = aloca(x);

    if(vet != NULL){
        printf("Deu bom!");
        free(vet);
}
    else
        printf("Deu ruim!");

return 0;
}
