#include <stdio.h>
#include <time.h>

int main(){
	
	float consumo_moradores, capacidade, volume, alt, larg, comp, autonomia;
	
	scanf("%f %f %f", &alt, &larg, &comp); //volume
	scanf("%f", &consumo_moradores); //litros/dia

     if(consumo_moradores < 0){
        consumo_moradores *= -1;
    }
	
	if(alt < 0){
        alt *= -1;
    }
	
	if(larg < 0){
        larg *= -1;
    }
	
	if(comp < 0){
        comp *= -1;
    }
	
	volume = alt*larg*comp; //cm^3
	
	capacidade = volume / 1000;

	autonomia = capacidade / consumo_moradores;

	printf("Valores corretos, agora vou calcular...em\n");

	for(int i = 3; i > 0 ; i--){
		printf("%d\n", i);
		sleep(1);
	}

	if(autonomia < 2.0){
		printf("\nCapacidade do Reservatorio= %.1f litros\nAutonomia do reservatorio= %.1f dias\nConsumo Elevado\n", capacidade, autonomia);
	} else if(autonomia >= 2.0 && autonomia < 7.0){
		printf("\nCapacidade do Reservatorio= %.1f litros\nAutonomia do reservatorio= %.1f dias\nConsumo Moderado\n", capacidade, autonomia);
	}else
		printf("\nCapacidade do Reservatorio= %.1f litros\nAutonomia do reservatorio= %.1f dias\nConsumo Reduzido\n", capacidade, autonomia);
	
	return 0;
}
