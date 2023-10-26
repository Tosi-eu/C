#include <stdio.h>
#include <stdlib.h>

int **ler_matriz(int linhas, int colunas);
void imprimir_matriz(int **mat, int linhas, int colunas);
void liberar_matriz(int **mat, int linhas);

int main()
{
	int rows, columns, **matrix, biggest;
	scanf("%d %d", &rows, &columns);

  matrix = ler_matriz(rows, columns);


  biggest = matrix[0][0];

  for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
        if(matrix[i][j] > biggest){
          biggest = matrix[i][j];
        }
    }
  }

  imprimir_matriz(matrix, rows, columns);
  printf("\n%d", biggest);
  liberar_matriz(matrix, rows);
	return 0;
}

int **ler_matriz(int linhas, int colunas){

    int **matrix;

    matrix = (int**)calloc(linhas,sizeof(int*));


  if (matrix == NULL){
      exit(1);
    }  

    for (int i = 0; i < linhas; i++) {
        matrix[i] = (int *)calloc(colunas, sizeof(int));
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    return matrix;
}
void imprimir_matriz(int **mat, int linhas, int colunas){

    for(int i = 0 ; i < linhas ; i++) {
        for(int j = 0 ; j < colunas; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}	

void liberar_matriz(int **mat, int linhas){

    if (mat == NULL){
      exit(1);
    }

    for (int i = 0;  i < linhas; i++) {
      free (mat[i]);  
    }

    free (mat);              
    mat = NULL;                 
}

