#include <stdio.h>
#include <stdlib.h>

int main()
{
int fatorial, n;

scanf("%d", &n);

for(fatorial = 1; n > 1; n -= 1) // fatorial = 1, pq se começar por 0, vai dar 0
fatorial = fatorial * n;

printf("%d", fatorial);

return 0;
system("Pause");
}
