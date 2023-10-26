#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int mat[4][7];

  srand(time(NULL));

  
 for(int i = 0; i < 4; i++){
    for(int j = 0; j < 7; j++){
     mat[i][j] = rand() % 100;
    }
    printf("\n");
  }

   for(int i = 0; i < 4; i++){
    for(int j = 0; j < 7; j++){
     if(mat[i][j] % 2 == 0){
       printf("%d ", mat[i][j]);
     }
    }
    printf("\n");
  }

  return 0;
}
