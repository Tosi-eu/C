#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){

  int mat[5][5], mat2[5][5];

  srand(time(NULL));

 for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
     mat[i][j] =  rand() % 100;
    }
    printf("\n");
  }

   for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
             mat2[i][j] = pow(mat[i][j], 2);
    }
    printf("\n");
  }

  printf("\n");

   for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
           printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

printf("\n");

   for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
           printf("%d ", mat2[i][j]);
    }
    printf("\n");
  }

  return 0;
}