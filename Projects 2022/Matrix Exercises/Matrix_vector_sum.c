#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int mat[3][3], vet[3] = {0, 0, 0};

  srand(time(NULL));

  
 for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
     mat[i][j] = rand() % 10;
    }
    printf("\n");
  }

   for(int j = 0; j < 3; j++){
    for(int i = 0; i < 3; i++){
      vet[j] += mat[i][j];
     }
    }

printf("\n");

   for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
       printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  
for(int i = 0; i < 3; i++){
   printf("\n%d", vet[i]);
}

  return 0;
}
