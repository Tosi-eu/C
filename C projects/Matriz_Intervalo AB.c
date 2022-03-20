#include <stdio.h>
#define L 4
#define C 5

int main()

{
int matriz[L][C], i, j, A, B, count = 0;

scanf("%d %d", &A, &B);

for (i = 0; i < L; i++) { // para as linhas
for (j = 0; j < C; j++) { // para as colunas
scanf("%d", &matriz[i][j]);}
 }

for (i = 0; i < L; i++) { // para as linhas
    for (j = 0; j < C; j++) { // para as colunas
        if((matriz[i][j] >= A) && (matriz[i][j] <= B)){
                            count++;
        }
    }
}

printf("%d", count);

return 0;
}
