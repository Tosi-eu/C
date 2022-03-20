#include <stdio.h>
#include <stdlib.h>

int main()
{
int mat [4] [5];
int vet [5];
int i, j;
int soma = 0;

for (i = 0; i < 4; i++){
for (j = 0; j < 5; j++){
scanf ("%d", &mat[i] [j]);} // -> valores de a(i,j)
}

for (j = 0; j < 5; j++){
for (i = 0; i < 4; i++){
    soma += mat [i][j];
}
vet[j] = soma;
soma = 0;

}

for (j = 0; j < 5; j++){
        printf("%d  ", vet[j]);
}

 system("pause");
 return 0;
 }
