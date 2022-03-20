#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h;
    char sexo;
    float peso_m;
    float peso_f;

    printf("digite o sexo da pessoa - m - para masculino e - f - para feminino  :\n");
    scanf("%c",&sexo);
    printf("digite a altura da pessoa em metros : \n");
    scanf("%f",&h);

    if(sexo == 'm')
    {
      peso_m = (72.8 * h) - 58  ;
      printf("\n o peso ideal do homem vai ser de: %.2f\n", peso_m);
     }

     else if (sexo == 'f') {

     peso_f = (62.1 * h) - 44.7 ;
     printf("o peso ideal da mulher vai ser de: %.2f\n", peso_f);

     }
        system("pause");
        return (0);
}
