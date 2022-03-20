#include <stdio.h>
#include <stdlib.h>


int main()
{
    int VA[10];
    int i, totalpar=0;
    float contador = 0;

    for(i=0;i<10;i++)
    {
  // Digite os valores do vetor //

        scanf("%d",&VA[i]);
    }
    for(i=0;i<10;i++)
    {
        if(VA[i]%2 ==0)
        {
           totalpar += VA[i];
           contador++;
         }
    }
        printf("%d",totalpar);
        return 0;
        system("pause");
}
