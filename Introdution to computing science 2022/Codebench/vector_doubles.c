#include <stdio.h>

int main(){

    float vet[5], value;

    scanf("%f", &value);

    for(int i = 0; i < 5; i++){
        if(i == 0){
            vet[i] = value;
        }else{
            vet[i] = vet[i-1]*2;
        }
        printf("vet[%d] = %.2f\n", i, vet[i]);
       }

    return 0;
}
