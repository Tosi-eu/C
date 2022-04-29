#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int mat[5][5], sum_excludeDiag = 0;

  srand(time(NULL));

 for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
     mat[i][j] =  rand() % 100;
    }
    printf("\n");
  }

   for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
          if(i + j != 4 && i != j){
             sum_excludeDiag += mat[i][j];
          }
    }
  }

printf("\n");

   for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
           printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  printf("\n%d", sum_excludeDiag);

  return 0;
}