#include <stdio.h>

int main(){

    int vet[5];

    for(int i = 0; i < 5; i++){
        // pointer for access the values of the array --> *(vetor)
        scanf("%d", &(*(vet + i)));
        printf("\t%d ", (*(vet + i)) * 2);
    }
    printf("\n");

    for(int i = 0; i < 5; i++){
      if(*(vet + i) % 2 == 0){
        printf("%d ", &(*(vet + i)));
      }
    }

    return 0;
}