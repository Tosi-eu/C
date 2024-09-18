#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("saida.txt", O_RDONLY);
    if (fd == -1) {
        perror("Erro ao abrir o arquivo, compile e execute write.c antes!");
        return 1;
    }

    char buffer[132];
    ssize_t bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read == -1) {
        perror("Erro ao ler o arquivo");
        return 1;
    }

    buffer[bytes_read] = '\0';

    printf("Conteúdo do arquivo: %s\n", buffer);

    close(fd);
    return 0;
}
