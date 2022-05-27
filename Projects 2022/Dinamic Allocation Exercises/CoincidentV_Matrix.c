#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Coincidents(int **matrix, int row, int column, int value);
void saveIndex(int i, int j, int value);

int main(){

    srand(time(NULL));

    int row, column, **matrix, values, coincident, i_found,j_found;
    
    scanf("%d %d", &row, &column);
    
    matrix = (int**) malloc(row * sizeof(int*));

    for(int i = 0; i < row; i++){
        matrix[i] = (int*) malloc(column * sizeof(int));
    }

    if(matrix == NULL){
        printf("Impossible to allocate Matrix...\n");
        exit(1);
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            matrix[i][j] = rand() % 100;
        }
    }
    
    values = rand() % 100;

    coincident = Coincidents(matrix, row, column, values);

    for(int i = 0; i < row; i++){
        free(matrix[i]);
    }

    free(matrix);
    matrix = NULL;

    return 0;
}

int Coincidents(int **matrix, int row, int column, int value){
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(matrix[i][j] == value){
                saveIndex(i, j, value);
                return 1;
            }
          }
        }

    printf("Value don't is at any matrix index...");
    return 0;
}

void saveIndex(int i, int j, int value){

  int i_found, j_found, value_found;

    i_found = i;
    j_found = j;
    value_found = value;
    printf("Value found at Matrix[%d][%d] = %d", i_found, j_found, value_found);

}
