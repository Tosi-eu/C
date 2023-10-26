#include <stdio.h>

int main(){
	
	double price, prod[40];

	gets(prod);
	scanf("%lf", &price); 
	
	if(price >= 200){
		price -= price*0.05;
	}else
		price = price;
	
	printf("%s costs %.0lf dollars", prod, price);
	
	
	return 0;
	
}
