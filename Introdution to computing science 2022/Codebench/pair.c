#include <stdio.h>

int main(){

	int vet[10], count_par = 0, count_impar = 0;

	for(int i = 0; i < 10; i++){
		scanf("%d", &vet[i]);
	}

	for(int i = 0; i < 10; i++){
		if( vet[i] % 2 == 0){
			count_par++;
		}else
			count_impar++;
		}

    printf("%d\n%d", count_par, count_impar);

    return 0;
}



