#include <stdio.h>

int main(){
	
  int linha, coluna, metade, aux;

	scanf("%d %d", &linha, &coluna);
	
	int mat[linha][coluna];

  if(coluna % 2 == 0){
		metade = coluna / 2;
	}else
    metade = (int )(coluna/2);
		
  for(int j = 0; j < linha; j++){
    for(int i = 0; i < coluna; i++){
      if(i % 2 == 0 && i < metade){
        mat[j][i] = 1;
      }else
        mat[j][i] = 0;
    }
  }

  for(int j = 0; j < linha; j++){
    for(int i = 0; i < coluna; i++){
        printf("%d ", mat[j][i]);
      }
      printf("\n");
    }

//rintf("\n%d", valores);
	return 0;
}