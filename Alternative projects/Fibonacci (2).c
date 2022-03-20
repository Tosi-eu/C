#include <stdio.h>

int main() {

int n;
    scanf("%d", &n);

    int vet[n];
    vet[n-1] = 1;
    vet[n-2] = 1;

    for(int i = n - 3; i >= 0; i--){
        vet[i] = vet[i+1] + vet[i+2];
    }
    for(int i = 0; i < n; i++){
            printf("%d ", vet[i]);
            }

 return 0;

}
