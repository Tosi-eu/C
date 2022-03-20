#include <stdio.h>
#include <stdbool.h>

int main() {

    int vet[10], i,j;
    bool rept;


    for (i=0; i<10; i++) {
        scanf("%d", &vet[i]);
    }

    for (i=0; i<10; i++) {
        rept = false;
            for (j = 0; j < i; j++) {
                if (vet[i] == vet[j]) {
                    rept = true; //N = rept //
                        break;
            }
        }

        if (!rept) {
            printf("%d ", vet[i]);

        }
    }

    return 0;
}
