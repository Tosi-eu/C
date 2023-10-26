#include <stdio.h>

int main(){
	
  int linha, coluna;

	scanf("%d %d", &linha, &coluna);
	
	int valores = 0;
	
	int mat[linha][coluna];
	
	if(linha % 2 == 0){
		valores = linha / 2;
	}else
    valores = (int )(linha/2);
		
  for(int i = 0; i < linha; i++, valores--){
    for(int j = 0; j < coluna; j++){
      mat[i][j] = valores;
      if(mat[i][j] < 0){
        mat[i][j] = 0;
      }
    }
  }

  for(int i = 0; i < linha; i++){
    for(int j = 0; j < coluna; j++){
        printf("%d ", mat[i][j]);
      }
      printf("\n");
    }

	return 0;
}
