#include <stdio.h>
#include <locale.h>
#include <string.h>

struct carro{

char fabricante[20];
char modelo[10];
int *ano;
char cor[10];
float preco;
};

int main()
{

setlocale(LC_ALL, "Portuguese");
struct carro inf;

printf("Fabricante: ");
gets(inf.fabricante);

printf("Modelo: ");
gets(inf.modelo);

printf("Cor: ");
gets(inf.cor);

printf("ano: ");
scanf("%d", &inf.ano);

printf("preço: ");
scanf("%f", &inf.preco);

printf("\n");

printf("Dados obtidos: %s \\ %s \\ %d \\ %s \\ %.2f\n", inf.fabricante, inf.modelo, inf.ano, inf.cor, inf.preco);


return 0;
}
