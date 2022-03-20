#include <stdio.h>
#include <stdlib.h>


void multiplos(int *vet, int n){
    int i;

    for(i = 1; i <= n; i++){
        vet[i] = i * n;
    }
}


int main(){
    int n, *v;

    v = (int *) malloc(sizeof(int));

    scanf("%d", &n);

    multiplos(v, n);

    for(int i = 1; i <= n; i++){
          printf("%d ", v[i]);
    }
    free(v);
    return 0;
}
