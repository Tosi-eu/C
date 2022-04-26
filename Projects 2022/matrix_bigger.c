#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int matrix[4][4], bigger, loc_line, loc_row;

  srand(time(NULL));

  bigger = matrix[0][0];

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
       matrix[i][j] = 10 + rand() % 1000;
    }
  }

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      if(matrix[i][j] > bigger){
          bigger = matrix[i][j];
          loc_line = i;
          loc_row = j;
      }
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  printf("\n%d %d %d", bigger, loc_line, loc_row);

  return 0;
}