#include <stdio.h>
#define tam 5

int main(){



    int vet[tam], *pVet;

    for(int i = 0; i < tam; i++){
            pVet = &vet[i];
            scanf("%d", pVet);
}

    for(int i = 0; i < tam; i++){
            pVet = &vet[i];
            printf("\n");
            printf("%d", *pVet*2);
}

return 0;
}

