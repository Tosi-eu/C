#include <stdio.h>
#include <stdlib.h>

int main (){

    int *vet, *aux, count=0, rep = 0, size;

    //size of vector
    scanf("%d", &size);

    vet = (int *)malloc(size*sizeof(int));
    aux = (int *)malloc(size*sizeof(int));

    for(int i = 0; i < size; i++){
        aux[i] = 0;
    }

    for(int i = 0; i < size ; i++){
        printf("Number %dº: \n", i+1);
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(vet[i] == vet[j]){
                // verifying aux vector
                for(int k = 0; k < size; k++){
                    if(aux[k] != 0 && aux[k] == vet[i]){
                        // conditions to add a repeated element
                        rep = 1;
                    }
                }
                // if not, add to aux
                if(rep == 0){
                    count++;
                    aux[i] = vet[i];
                }
            }
        }
    }

    // in case of the vector has one value in all spaces of him, means that there is only one number repeated
    printf("%d Number(s) is/are equal...And he/they is/are:\n",count);
    for(int i = 0; i < size; i++){
        if(aux[i] != 0)
            printf("%d ", aux[i]);
    }

    free(vet);
    free(aux);
    return 0;

}