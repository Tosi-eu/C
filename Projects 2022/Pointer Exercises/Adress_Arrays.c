#include <stdio.h>

int main(){

  float vet[10], mat[3][3];

  for(int i = 0; i < 10; i++){
    scanf("%f", &vet[i]);
  }

    for(int i = 0; i < 10; i++){
    printf("%d\n", &(*(vet + i)));
  }

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%f", &mat[i][j]);
    }
  } 

printf("\n");

    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        printf("%d ", &(*( *(mat + i) + j)));
    }
    printf("\n");
  }

  return 0;
}
