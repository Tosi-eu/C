#include <stdio.h>

int main(){

	int coins, vet_topo[5] = {101, 101, 101, 101, 101}, vet_pilha[5] = {0, 0, 0, 0, 0};

	for(int i = 0; i < 20; i++){
		scanf("%d", &coins);


	for(int coin = 0; coin < 5; coin++){
		if(vet_topo[coin] >= coins){
			vet_pilha[coin]++;
			vet_topo[coin] = coins;
			break;
		}
	}
}

	for(int i = 0; i < 5; i++){
		printf("%d ", vet_pilha[i]);
	}

	return 0;
}
