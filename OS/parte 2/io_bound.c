#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main() {
    FILE *file;
    char buffer[BUFFER_SIZE];
    int line_count = 0;
    int user_line;
    
    file = fopen("tempfile.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    while (fgets(buffer, BUFFER_SIZE, file) != NULL) {
        line_count++;
    }

    fseek(file, 0, SEEK_SET);

    printf("O arquivo contém %d linhas.\n", line_count);

    while (1) {
        printf("Digite o número da linha que deseja ver (1 a %d) ou 0 para sair: ", line_count);
        scanf("%d", &user_line);

        if (user_line == 0) {
            break; 
        }

        if (user_line < 1 || user_line > line_count) {
            printf("Erro: Linha fora do intervalo.\n");
            continue;
        }

        fseek(file, 0, SEEK_SET);

        for (int i = 1; i <= user_line; ++i) {
            if (fgets(buffer, BUFFER_SIZE, file) == NULL) {
                printf("Erro ao ler a linha.\n");
                break;
            }
        }

        printf("Linha %d: %s", user_line, buffer);
    }

    fclose(file);
    return 0;
}
