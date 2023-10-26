#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// EXERCISE: CREATE A PROGRAM THAT REGISTER 90 OXES, THEIR ID AND WEIGHT. AFTER, FIND THE GRATER AND LESSER WEIGHT, AND THE ID OF THESE OXES.

int main()
{

    int id_boi[90], boi_id_pesado, boi_id_leve;
    float peso_boi[90], maior_peso, menor_peso;

    srand(time(NULL));

    for (int i = 0; i < 90; i++)
    {
        peso_boi[i] = 100 + (rand() % 500);
        id_boi[i] = rand() % 91;
    }

    maior_peso = peso_boi[0];
    menor_peso = peso_boi[0];

    for (int i = 0; i < 90; i++)
    {
        if (peso_boi[i] > maior_peso)
        {

            maior_peso = peso_boi[i];
            boi_id_pesado = id_boi[i];
        }
        else if (peso_boi[i] < menor_peso)
        {
            menor_peso = peso_boi[i];
            boi_id_leve = id_boi[i];
        }
    }

    printf("\n\n%.2f\t%d\n%.2f\t%d\n", maior_peso, boi_id_pesado, menor_peso, boi_id_leve);

    return 0;
}
