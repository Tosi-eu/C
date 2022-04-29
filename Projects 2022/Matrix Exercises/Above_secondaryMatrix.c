#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int mat[5][5], sum_above = 0;

  srand(time(NULL));

  
 for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
     mat[i][j] = rand() % 100;
    }
    printf("\n");
  }

   for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
          if(i + j == 3){
            printf("%d ", mat[i][j]);
            sum_above += mat[i][j];
          }
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

  printf("\n%d", sum_above);

  return 0;
}