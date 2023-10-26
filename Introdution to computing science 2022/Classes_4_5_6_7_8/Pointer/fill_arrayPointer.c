#include <stdio.h>

void FillArray(int *vet, int value);

int main(){

	int value, vet[10];
	scanf("%d", &valor);

	FillArray(vet, value);

	return 0;

}

void FillArray(int *vet, int value){

	for(int i = 0; i < 10; i++){

	  	*(vet + i) = value;

  }

	for(int i = 0; i < 10; i++){

  		printf("%d ", *(vet + i));

  }

	printf("\n");
  
}
