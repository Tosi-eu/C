#include <stdio.h>

int main(){
	
	int meses;
	float money, money_fees;
	
	scanf("%f %d", &money, &meses);
	
	money_fees = money;
	
	for(int i = 1; i <= meses; i++){
		money_fees += money_fees*0.04; 
		printf("%.2f $$\n", money_fees);
    }

	return 0;
}
