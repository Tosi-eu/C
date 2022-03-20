#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char *invert(char *frase){
        int i, j = 0;
        char *frase2 = malloc(strlen(frase) * sizeof(char));
        for(i = strlen(frase) - 1; i >= 0; i--){
            frase2[j] = frase[i];
            j++;
    }
    frase2[j] = '\0';
    return frase2;
}

void main(){

    setlocale(LC_ALL, "Portuguese");
    char texto[50];
    char *texto2;

    printf("Frase com até 50 caracteres: ");
    fgets(texto, 50, stdin);

    texto2 = invert(texto);

    printf("\nTexto invertido: %s", texto2);

    free(texto2);
}
