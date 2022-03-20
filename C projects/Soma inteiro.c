#include <stdio.h>
#include <stdlib.h>

int main(){

int a, sus, ant, soma;

printf("digite um numero inteiro: ");
scanf("%d", &a);

sus = a*3+1;
ant = a*2-1;
soma = sus+ant;

printf("O sucessor do triplo do numero %d sera: %d e o antecessor do dobro sera: %d\n", a, sus, ant);
printf("\nA soma do sucessor com o antecessor sera: %d\n", soma);

system("pause");
return 0;
}
