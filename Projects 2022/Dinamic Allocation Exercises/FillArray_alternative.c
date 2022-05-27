#include <stdio.h>
#include <stdlib.h>

int *fillArray(int n);
int* fillArrayPositive(int n);

int main(){

    int n, *vet, op;

    printf("What do you want: \n");
    printf("1 - Only fill an array\n");
    printf("                       or\n");                       
    printf("2 - Fill an array with only positive values\n");
    scanf("%d", &op);
    
    printf("Vector size: ");
    scanf("%d", &n);

    while(op != 1 && op != 2){
      printf("Invalid key, please try again...\n");
      scanf("%d", &op);
    }

    if(op == 1){
        vet = fillArray(n);
    }else{
      vet = fillArrayPositive(n);
    }

    for(int i = 0; i < n; i++){
      printf("%d ", vet[i]);
    }

    free(vet);
    vet = NULL;

    return 0;
}

int *fillArrayPositive(int n){
   
    int *vet;

    vet = (int*) malloc(n * sizeof(int));

    if(n <= 0){
        vet = NULL; // null pointer
        return vet;
    }
    
    if(vet == NULL){
        printf("Impossible to alocate memory...\n");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
        while(vet[i] <= 0){
          printf("Invalid key, please try again...\n");
          scanf("%d", &vet[i]);
        }
    }

    return vet;
}

int *fillArray(int n){

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
