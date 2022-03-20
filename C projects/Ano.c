#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

int Ano;
	bool Bissexto;

	printf("Digite o ano: \n\n");

	scanf("%d", &Ano);

	if (Ano % 400 == 0) {
		Bissexto = true;
	}
	else if ((Ano % 4 == 0) && (Ano % 100 != 0)) {
		Bissexto = true;
	}
	else {
		Bissexto = false;
	}

	if (Bissexto == true) {
		printf("\nO ano e bissexto!\n\n");
	} else {
		printf("\nO ano nao e bissexto!\n\n");
	}

system("Pause");
return 0;
}
