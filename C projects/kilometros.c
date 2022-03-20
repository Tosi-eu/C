#include <stdio.h>
#include <stdlib.h>

int main(){

float Km, L, Consumo;
char frase[10] = "Venda o carro!"; frase[12] = "Economico!"; frase[20] = "Super Economico!";

printf("Digite quantos kilometros voce ira percorrer(Km): \n");
scanf("%f", &Km);

printf("Digite quantos litros de gasolina voce gasta para percorrer essa distancia(L): \n");
scanf("%f", &L);

Consumo = (Km/L);
printf("O rendimento do automovel sera (Km/L): %.1f", Consumo);


if("%f", Consumo < 8){
    printf("\n%s", "Venda o carro!\n");
}

if(Consumo >8 && Consumo<12){
    printf("\n%s", "Economico!\n");
}

if(Consumo > 12){
    printf("%sSuper Economico!\n");
}

system("pause");
return 0;
}
