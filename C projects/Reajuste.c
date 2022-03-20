#include <stdio.h>
#include <stdlib.h>

int main ()
{
float Salario,NovoSalario,ValorAumento;

printf ("\nValor do Salario: \n");
scanf("%f",&Salario);
if ((Salario<500))
{
    ValorAumento= Salario*0.20;
    NovoSalario= Salario*1.20;
    printf("\nValor do Aumento em 20 Porcento: %.2f\n",ValorAumento);
    printf("\nValor do Novo Salario: %.2f\n",NovoSalario);
}
else if ((Salario>500))

{
    ValorAumento= Salario*0.10;
    NovoSalario= Salario*1.10;
    printf("\nValor do Aumento em 10 Porcento: %.2f\n",ValorAumento);
    printf("\nValor do Novo Salario: %.2f\n",NovoSalario);
}
    return 0;
    system("pause");
}
