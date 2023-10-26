#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int op;
	char prod[30];
	double price;
	
	scanf("%d", &op);
	
	switch(op){
			
		case 100:
			
			strcpy(prod, "Cachorro Quente");
			price = 7.20;
			break;
			
		case 101:
			
			strcpy(prod, "Bauru Simples");
			price = 8.50;
			break;
			
		case 102:
			
			strcpy(prod, "Bauru com Ovo");
			price = 11.50;
			break;
			
		case 103:
			
			strcpy(prod, "Hamburguer");
			price = 8.50;
			break;
			
		case 104:
			
			strcpy(prod, "Cheeseburguer");
			price = 10.00;
			break;
			
				
		case 105:
			
			strcpy(prod, "Suco");
			price = 2.50;
			break;
			
		case 106:
			
			strcpy(prod, "Refrigerante");
			price = 3.50;
			break;
			
		default:
			exit(1);		
			
	}
	
	printf("%s\n%.2f", prod, price);
	
	return 0;
}
