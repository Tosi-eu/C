#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int mat[3][3];

  srand(time(NULL));

  
 for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
     mat[i][j] = rand() % 100;
    }
    printf("\n");
  }

   for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
     if(i + j == 2){
       printf("%d ", mat[i][j]);
     }
    }
    printf("\n");
  }

printf("\n");

   for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
       printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}