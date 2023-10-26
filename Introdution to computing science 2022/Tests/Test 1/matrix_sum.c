#include <stdio.h>
#define line 3
#define row 3

/*

  Program for store the sum of same indexes of 2 different matrix, in other matrix

*/


void fill_mat(int mat[][row]){

  for(int i = 0; i < line; i++){
    for(int j = 0; j < row; j++){
      scanf("%d ", &mat[i][j]);
    }
  }
}

void show(int mat[][row])
{
    int lines, rows;

    printf("\n");

    for(lines = 0 ; lines < line ; lines++)
    {
        for(rows = 0 ; rows < row ; rows++)
            printf("%d ", mat[lines][rows]);

        printf("\n");
    }

    printf("\n");

}

int main(){

  int mat[line][row], mat2[line][row], m_res[line][row] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

  fill_mat(mat);
  fill_mat(mat2);

  for(int i = 0; i < line; i++){
    for(int j = 0; j < row; j++){
      m_res[i][j] = (mat[i][j] + mat2[i][j]);
    }
  }

  show(mat);
  show(mat2);
  show(m_res);

  return 0;
}