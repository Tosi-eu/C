#include <stdio.h>

//OBS: se usa (int)n para representar somente a parte inteira de n //

int main(){

    float nReal, inteiro, decimal;

    scanf("%f", &nReal);
    decimal = nReal -(int)nReal;
    inteiro = (int)nReal;

    printf("Inteiro: %.0f e Decimal: %.2f\n", inteiro, decimal);

}
