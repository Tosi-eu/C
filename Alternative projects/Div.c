#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, *vet, i;
    vet = (int *) malloc(20*sizeof(int));

    scanf("%d", &n);

    for (int i = n; i >= 1; i--){
        if (vet[n] % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;

}
