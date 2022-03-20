#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[5],v2[5],Soma[5],i;
    for(i=0;i<5;i++){
        scanf("%d",&v1[i]); // -> Valores do vetor 1 <- //
    }
    for(i=0;i<5;i++){
        scanf("%d",&v2[i]); // -> Valores do vetor 2 <- //
    }
    for(i=0;i<5;i++){ //  -> Vetor soma(S) = V1 + V2 <- //

        Soma[i]=v1[i]+v2[i];
        printf("%d ", Soma[i]);
    }

    return 0;
    system("pause");

}
