#include <stdio.h>
#include <stdlib.h>

int main(){
float MP, MT, MF, P1, P2, P3, T1, T2;
char frase1[10]= "Aprovado!";char frase2[20] = "Recuperacao!";

printf("Digite suas notas de prova: \n");
scanf("%f", &P1);
scanf("%f", &P2);
scanf("%f", &P3);

printf("\nDigite suas notas de trabalho: \n");
scanf("%f", &T1);
scanf("%f", &T2);

MP = (2*P1 + 3*P2 + 3*P3)/8;
MT = (T1+T2)/2;
MF = (7*MP + 3*MT)/10;

printf("\nA media das provas sera: %.2f\n", MP);
printf("\nA media dos trabalhos sera: %.2f\n", MT);
printf("\nSua media final sera: %.2f\n", MF);

if("%f", MF>=5)
    printf("\n%s\n", frase1);
else if("%f", MF<5)
    printf("\n%s\n", frase2);

system("pause");
return 0;
}
