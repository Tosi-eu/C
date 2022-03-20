#include <stdio.h>

int main()
{

int m[4][5], v[5], i , j, soma = 0;

for (i = 0; i< 4; i++)
{
for (j = 0; j < 5; j++)
{
scanf ("%d", &m[i][j]); // -> valore de linhas e colunas <- //
}
}

for (j = 0; j < 5; j++)

{
for (i = 0; i < 4; i++)
{
    soma += m[i] [j] ;

    // -> gera coluna 1, coluna1 + coluna2... //
}
v[j] = soma;
soma = 0;
}
for (j = 0; j < 5; j++)
{
printf("%d ", v[j]);
}
 return 0;
 }
