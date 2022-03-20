#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

setlocale(LC_ALL, "Portuguese");

float temp[24], *pT;

    for(int i = 0; i < 24; i++){
        scanf("%f", &temp[i]);
    }
        for(int i = 0; i < 23; i++){
             pT = &temp[i];
            *pT = 1.8 * temp[i] - 459.67;
        }
        printf("\nPosição\t Temp\n\n");

            for(int i = 0; i < 24; i++){
                printf(" %d\t%.2f \n", i+1, *pT);
            }

return 0;
system("pause");
}
