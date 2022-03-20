#include <stdio.h>
#include <stdlib.h>

int main()
{

float IMC, Altura, Peso;

printf("Digite sua altura(m): \n\n");
scanf("%f", &Altura);

printf("\nDigite seu peso(Kg): \n\n");
scanf("%f", &Peso);

IMC = Peso/(Altura*Altura);
printf("\nSeu IMC sera de: %.2f\n", IMC);

{
if(IMC < 18.5)
    printf("n Abaixo do Peso!\n");

else if(IMC >= 18.5 && IMC < 24.9)
     printf("\nSaudavel!\n\n");

else if(IMC >= 25.0 && IMC < 29.9)
    printf("\nPeso em excesso!\n\n");

else if(IMC >= 30.0 && IMC < 34.9)
        printf("\nObesidade Grau 1 - Comece a se cuidar!\n\n");

else if(IMC >= 35.0 && IMC < 39.9)
        printf("\nObesidade Grau 2 - Procure um nutricionista!\n\n");

else if(IMC > 40.0)
        printf("\nObesidade Grau 3 - Alto risco de vida!\n\n");
}

system("Pause");
return 0;
}


