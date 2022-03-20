#include<stdio.h>

int main()
{
int x, y, numero;

 if(y > x){
    int temp = y;
    y = x;
    x = temp;}

scanf("%d %d", &x, &y);

for(numero = x; numero <= y; numero++)
    printf("%d ", numero);

return 0;
}
