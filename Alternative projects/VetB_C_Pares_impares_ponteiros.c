#include <stdio.h>

int main(){

    void vetor(int *vet);
    int a[20];
    for(int i = 0; i < 20; i++)
        scanf("%d", &a[i]);
    vetor(a);
}

void vetor(int *vet){

    int contA = 0, contB = 0;

    for(int i = 0; i < 20; i++){
        if(vet[i]%2==0){
            printf("%d ", vet[i]);
                contA++;
        }
    }

    printf("\n");
    printf("Elementos de B: %d", contA);
    printf("\n");

    for(int i = 0; i < 20; i++){
        if(vet[i]%2==1){
            printf("%d ", vet[i]);
                contB++;
        }
    }

    printf("\n");
    printf("Elementos de C: %d", contB);
    printf("\n");
}
