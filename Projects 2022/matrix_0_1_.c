#include <stdio.h>

int main(){

  int matrix[5][5];

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
       if(i == j){
         matrix[i][j] = 1;
       }else{
         matrix[i][j] = 0;
       }
    }
  }

  printf("\n");

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");


  return 0;
}