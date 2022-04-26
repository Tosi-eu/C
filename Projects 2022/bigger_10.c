#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int matrix[5][5], bigger_than_10[5][5], count = 0, *ptr;

  srand(time(NULL));

  ptr = &bigger_than_10[0][0];
  memset(ptr, 0, 5 * 5 * sizeof(int)); // filling the matrix with zeros in all indexes

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
       matrix[i][j] = rand() % 20;
    }
  }

  printf("\n");

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(matrix[i][j] > 10){
         bigger_than_10[i][j] = matrix[i][j];
         count++;
    }
    printf("%d ", matrix[i][j]);
   }
   printf("\n");
  }

  printf("\n");

   for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        if(bigger_than_10[i][j] != 0){
         printf("%d ", bigger_than_10[i][j]);
       }
    }
  }
   printf("\n");

  return 0;
}