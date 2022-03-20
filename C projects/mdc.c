#include <stdio.h>
#include <stdlib.h>

int main()
{

//-------------Valores que serão utitlizados----------------//

int n1, n2, n3, mmc, mdc, plus_gros, plus_petit;

//-------------Dê os valores de n1, n2 e n3-----------------//

scanf("%d %d %d", &n1, &n2, &n3);

//---------------------------------------------------------//

if(n1 <= n2 && n1 <= n3)
        plus_petit = n1;
else if(n2 <= n1 && n2 <= n3)
        plus_petit = n2;
else if(n3 <= n1 && n3 <= n2)
        plus_petit = n3;
                                        //  -> Estabeleça quando os valores serão os menores  <- //
if(n1 >= n2 && n1 >= n3)
        plus_gros = n1;
else if(n2 >= n1 && n2 >= n3)
        plus_gros = n2;
else if(n3 >= n1 && n3 >= n2)
        plus_gros = n3;

//---------------------------------------------------------//

for(int i = 1; i <= plus_petit; i++)
        if((n1 % i == 0) && (n2 % i == 0) && (n3 % i == 0))   // --> Lógica do MMC
            mdc = i;

for(int i = n1*n2*n3; i >= plus_gros; i--)
        if((i % n1 == 0) && (i % n2 == 0) && (i % n3 == 0))  // --> Lógica do MDC
            mmc = i;

//---------------------------------------------------------//

printf("%d %d\n", mmc, mdc);

return 0;
system("pause");
}
