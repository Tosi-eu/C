#include <stdio.h>

int main(){

    float notas[100];
    size_t count = 0;
    unsigned int notasbaixas = 0, notasaltas = 0;
    float mediageral = 0, porcnotas_altas = 0;


    while(count <= 1000){
        scanf("%f", &notas[count]);
            if (notas[count] < 0){
                notas[count] = 0;
                    break;
        }
                    count++;
    }

    for (int i = 0; i < count;i++){
        if (notas[i] < 5){
            notasbaixas++;
        }else if (notas[i] >= 5){
            notasaltas++;
        }
        mediageral += notas[i];
    }

    mediageral /= count;
    porcnotas_altas = (notasaltas/(float)count*100);
    printf("%d %d %f %f", notasaltas, notasbaixas, mediageral, porcnotas_altas);

    return 0;
}
