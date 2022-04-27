#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 5
#define n 5

int main(){

  int matrix[m][n], count = 0;

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      matrix[i][j] = rand() % 100;
    }
  }

    for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  
  
  

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      int num = matrix[i][j];
      for(int k = 0; k < 5; k++){
          for(int l = 0; l < 5; l++){
            if(i != k || j != l){
              if(num == matrix[k][l]){
                  count++;
            }
          }
        }
      }
    }
  }

printf("%d\n", count);

  return 0;
}