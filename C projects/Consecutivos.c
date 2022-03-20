#include <stdio.h>
#include <stdlib.h>

int main()
{

int v[10], dif = 0, i, maior=0;

for(i = 0; i < 10; i++){
    scanf("%d", &v[i]); // ->  Valores do vetor  <- //
}

for(i=0; i < 10; i++)
    {
        dif = v[i+1] - v[i];

        if(dif > maior)
            maior = dif;
    }
    printf("%d", maior);

return 0;
system("pause");
}
