#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void convert(int vet[], int tam, int *i){

    for(int i = 0; i < tam; i++){
        vet[i] = abs(vet[i]);
 }
}

int main(){

int *v, i;

 v = (int *) malloc(10*sizeof(int));

    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);}

    convert(v, 10, &i);

    for(int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }

    free(v);

return 0;
}
