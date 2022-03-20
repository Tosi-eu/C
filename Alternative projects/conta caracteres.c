#include <stdio.h>
#include <locale.h>

int conta(char str[]) {

    int i = 0;

    do {
        ++i;
    } while (str[i] != 0);

    return i;
}

int main() {

    printf("+-----------------------------------------------------+");
    printf("\n");
    setlocale(LC_ALL,"");

    char frase[50];
    int res;

    printf(" Digite uma palavra/frase: ");
    scanf("%s", &frase);

    printf("\n");

    res = conta(frase);
    printf(" A quantidade caracteres da frase/palavra é: %d\n", res);

    printf("+-----------------------------------------------------+");

    return 0;

}
