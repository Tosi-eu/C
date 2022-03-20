#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int aloca(int tam){

    int i, *vet;
    vet = (int*) calloc(tam, sizeof(int));

    for(i = 0; i < tam; i++){
        vet[i] = i;
    }
    return vet;

}

int main(){

setlocale(LC_ALL, "Portuguese");
int *vet, i, x;

scanf("%d", &x);

vet = aloca(x);

for(i = 0; i < x; i++){
        printf("\nvetor na posição %d: ", i + 1);
        printf("%d\n ", vet[i]);
}
free(vet);

}
