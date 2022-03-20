#include <stdio.h>

int main()
{
  int mat[10][10] , i=0, j=0;

  for(i=0;i<10;i++) {
    for(j=0;j<10;j++) {
        mat[i][j] = (i+1)*(j+1);
        printf("%d  ",mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
