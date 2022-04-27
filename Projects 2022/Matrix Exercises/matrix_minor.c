#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int matrix[3][3], minor;

  srand(time(NULL));

  minor = matrix[0][0];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
       matrix[i][j] = 10 + rand() % 100;
    }
  }

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(matrix[i][j] < minor){
          minor = matrix[i][j];
      }
      printf("%d\n", matrix[i][j]);
    }
  }

  printf("\n%d", minor);

  return 0;
}