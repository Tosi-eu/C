#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int i, size;
    float *vet, mean = 0, variance = 0, deviation;

    printf("Vector size: ");
    scanf("%d", &size);

    vet = (float *)malloc(size * sizeof(float));
    
    for(i = 0; i < size; i++){
        scanf("%f", &vet[i]);
        mean = (mean + vet[i]) / (size - 1);
    }

    for(i = 0; i < 10; i++)
        variance = pow(vet[i] - mean, 2);
    
    deviation = sqrt(variance);
    printf("Deviation: %.2f\n", deviation);

    free(vet);
    return 0;
}