#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int f, c;
    printf("temperatura em Centigrados: ");

    scanf("%d", &c);

    f = ((c*9)/5)+32;

    printf("A temperatura em Fahrenheit vai ser de: %d\n", f);


    return 0;
    system("pause");
}
