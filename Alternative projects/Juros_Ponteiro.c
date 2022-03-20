#include <stdio.h>
#include <locale.h>

 float calculaJuros(float *saldo, float taxa) {
 float juros;
 juros = *saldo * taxa / 100;
 *saldo += juros;
 return juros;
 }

 int main()
 {
    setlocale(LC_ALL, "Portuguese");
    float Saldo2, Taxa2, Res;

    scanf("%f", &Saldo2);
    scanf("%f", &Taxa2);

    Res = calculaJuros(&Saldo2, Taxa2);

    printf("Juros será de: %.2f \n", Res);
    printf("Saldo ajustado: %.2f \n", Saldo2);

    return 0;
 }
