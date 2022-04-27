#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


// mat[i][j] = 2i + 7j -2, if i < j
// mat[i][j] = 3*pow(i, 2), if i == j
// mat[i][j] = 4*pow(i, 3) + 5*pow(j, 2) + 1, if i > j 
int main(){

  int mat[10][10];

  srand(time(NULL));

  
 for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
     mat[i][j] = rand() % 5;
    }
    printf("\n");
  }

     for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  printf("\nNew matrix\n");

   for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
     if(i < j){
        mat[i][j] = 2*i + 7*j -2;
     }else if(i == j){
       mat[i][j] = 3*pow(i, 2) - 1;
     }else if(i > j){
       mat[i][j] = 4*pow(i, 3) + 5*pow(j, 2) + 1;
     }
    }
    printf("\n");
  }

     for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}