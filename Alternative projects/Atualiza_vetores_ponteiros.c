#include <stdio.h>

void att(int *vet, int n){
    int *pn;
    for(int i = 0; i < 10; i++){
        pn = &vet[i];
        *pn = n;
    }
}

int main(){

int vet2[10], n2, *pn2;
    scanf("%d", &n2);

    att(vet2, n2);

    for(int i = 0; i<10; i++){
        pn2 = &vet2[i];
        printf("%d ", *pn2);
    }
return 0;
}
