#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int matrix[6][6], i, j, sum_secDiag = 0, sum_mainDiag = 0, sum_excludeDiag = 0;

    srand(time(NULL));

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            matrix[i][j] = rand() % 100; // Aleatory values
        }
    }

    for(int i = 0; i < 6; i++){
      for(int j = 0; j < 6; j++){
            printf("%d ", matrix[i][j]); // original matrix
    }
    printf("\n");
  }
            
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(i + j == 5){
                sum_secDiag += matrix[i][j];
            }
        }
    }

     for(int i = 0; i < 6; i++){
      for(int j = 0; j < 6; j++){
          if(i == j){
            sum_mainDiag += matrix[i][j];
          }
    }
  }

     for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
          if(i + j != 4 && i != j){
             sum_excludeDiag += matrix[i][j];
          }
    }
  }

    printf("\n%d - %d = %d\n", sum_excludeDiag, sum_secDiag, (sum_excludeDiag - sum_secDiag));
    printf("\n%d - %d = %d\n", sum_excludeDiag, sum_mainDiag, (sum_excludeDiag - sum_mainDiag));

    return 0;
}