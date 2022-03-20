#include <stdio.h>
#include<stdlib.h>

int main()
{

int n, i;
float R, E, raiz;

//----------------Digite o vlaor de E----------------//

scanf("%f", &E);

//-----Digite o valor da quantidade de iterações-----//

scanf("%d", &n);

//-----------------valor inicial de R----------------//

R = E/2;

//---------------------------------------------------//

for(i = 1 ; i < n; i++)
    R= (R + E/R)/2; // Valores para interação(n) > 1 //

//---------------------------------------------------//

raiz = R;

printf("%.4f", raiz);

return 0;
system("pause");
}
