#include <stdio.h>
#include <stdlib.h>

void freq(int *vet, int *pAbs, float *pRel) {
 int aux;
 //ordenando os dados
 for (int i=0; i<10; i++) {
    for (int j=i+1; j<10; j++) {
        if (vet[i] > vet[j]) {
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux; //ordem do vetor em ordem crescente //
 }
}
 }
 //calculando as frequencias
 for (int i=0; i<10; i++) {
        pAbs[i] = 1;
            for (int j=i+1; j<10; j++) {
                if (vet[i] == vet[j])
                        pAbs[i]++;
                    else {
                        if (pAbs[i] > 1) {
                            for (int x=i+1; x<(i+pAbs[i]); x++) {
                                    pAbs[x] = pAbs[i];
                                    pRel[x] = (float)pAbs[i] / 10;
                    }
                }
    break;
            }
        }
 pRel[i] = (float)pAbs[i] / 10;
 i += pAbs[i]-1;
    }
 }

int main(){

int vet[10], fAbs[10];
float fRel[10];

for(int i = 0; i < 10; i++){
    scanf("%d", &vet[i]);
}
freq(vet, fAbs, fRel);

for(int i = 0; i < 10; i++){
    printf("%d\t%d%\t%.2f\n", vet[i], fAbs[i], fRel[i]);
}

return 0;
system("Pause");
}
