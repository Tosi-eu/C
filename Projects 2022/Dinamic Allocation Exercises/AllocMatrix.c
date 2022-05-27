#include <stdio.h>
#include <stdlib.h>

  /*  
      why calloc instead of malloc? In the indexes that the user don't put values, calloc fills with 0
  */

void **FillMatrix(int n);
void **FillAnotherMatrix(int n);

int main(){

    int n, n2, **matrix;

    scanf("%d", &n);
    scanf("%d", &n2);

    matrix = FillMatrix(n);
    printf("\n");

    printf("\n");

    matrix = FillAnotherMatrix(n2);

    for(int i = 0; i > n2; i++){
      free(matrix[i]);
    }

    return 0;
}

void **FillMatrix(int n){

    int **matrix;

    matrix = (int**) calloc(n, sizeof(int*));

    if(matrix == NULL){
        printf("Impossible to allocate memory...\n");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        matrix[i] = (int*) calloc(n, sizeof(int));
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j)
                matrix[i][j] = 1;
        }
    }
    
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        printf("%d ", matrix[i][j]);
      }
      printf("\n");
    }
}

void **FillAnotherMatrix(int n){

    int **matrix;

    matrix = (int**) calloc(n, sizeof(int*));

    if(matrix == NULL){
        printf("Impossible to allocate memory...\n");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        matrix[i] = (int*) calloc(n, sizeof(int));
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          matrix[i][j] = 1;
            if(i == j)
                break;
        }
    }

    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        printf("%d ", matrix[i][j]);
      }
      printf("\n");
    }
}
