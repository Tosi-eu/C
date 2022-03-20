#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int alunos, i, count = 0;
    float *notas, media, media2, soma = 0, p1, p2;

    printf("Quantidade de alunos: ");
    scanf("%d", &alunos);
    notas = (float *) calloc(alunos, sizeof(float));

    printf("\n");

     while(count < alunos){
            if (notas[count] < 0){
                notas[count] = 0;
                    break;}
                    count++;
                    }

                    if(alunos == 1){

                            printf("Nota da prova 1 e prova 2: ");
                            scanf("%f %f", &p1, &p2);
                            media2 = p1 + p2;
                            printf("Média = %.2f", media2/2);
                        return 0;
                    }

    for(i = 0; i < alunos; i++){
            printf("Digite a %d nota: \n", i + 1);
            scanf("%f", &notas[i]);
    }

    for(i = 0; i < alunos; i++){
        soma += notas[i];
        }

         printf("\n");
         media = soma / count;

         printf("- A media da sala será: %.2f", media);
         free(notas);

        return 0;
    }
