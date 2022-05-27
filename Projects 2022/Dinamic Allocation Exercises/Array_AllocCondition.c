#include <stdio.h>
#include <stdlib.h>

int main(){

	int size, value, *Vet, n;

	while(n <= 0){
		scanf("%d", &n);
  }

  Vet = (int*) malloc(size * sizeof(int));
	
	if(Vet == NULL){
		printf("Memory won't be allocated...\n");
		exit(1);
	}
	
	for(size = 0; size < n; size++){ 
		scanf("%d", &value);
		  if(value >= 2){
		  	Vet[size] = value;
		}else{
      Vet[size] = 0;
    }
	}

  	for(size = 0; size < n; size++){ 
		  printf("%d ", Vet[size]);
	}

	free(Vet);
	Vet = NULL;

	return 0;
}
