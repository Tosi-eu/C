#include <stdio.h>
#include <stdlib.h>

int main(){

	int op;
	float money;

	scanf("%d", &op);

	switch(op){

		case 1:
			money = 1.0 / 5.12;
			printf("R$1,00 equivale a mais ou menos %.2f R$\n", money);
			break;

		case 2:
			money = 1.0 / 5.74;
			printf("R$1,00 equivale a mais ou menos %.2f R$\n", money);
			break;

		case 3:
			money = 1.0 / 0.25;
			printf("R$1,00 equivale a mais ou menos %.2f R$\n", money);
			break;

		case 4:
			money = 1.0 / 0.048;
			printf("R$1,00 equivale a mais ou menos %.2f R$\n", money);
			break;

		case 5:
			money = 1.0 / 0.044;
			printf("R$1,00 equivale a mais ou menos %.2f R$\n", money);
			break;

		default:
			exit(1);
	}


	return 0;
}
