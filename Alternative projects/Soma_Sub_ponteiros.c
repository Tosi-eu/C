#include <stdio.h>
#include <locale.h>

void SomaSub(int x, int y, int *pSoma, int *pSub){
    *pSoma = x + y;
    *pSub = x - y;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n, n2, Soma, Sub;
    scanf("%d %d", &n, &n2);

    SomaSub(n, n2, &Soma, &Sub);

    printf("A soma ser�: %d", Soma);
    printf("\n");
    printf("A subtra��o ser�: %d", Sub);


return 0;
}
