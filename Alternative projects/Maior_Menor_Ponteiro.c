#include <stdio.h>

void maiorMenor(int *vet, int *menor, int *maior){
    *menor = *vet;
    *maior = *vet;
    for(int i = 0; i < 10; i++){
        if(*menor > *(vet + i))
            *menor = *(vet + i);
                if(*maior < *(vet + i))
                    *maior = *(vet + i);
    }
}

int main(){

    int menor, maior, v[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }

    maiorMenor(v, &menor, &maior);
    printf("Menor: %d Maior: %d\n", menor, maior);

    return 0;
}
