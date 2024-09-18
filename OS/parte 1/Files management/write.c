#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define BUFFER_SIZE 131

int main() {
    int fd = open("saida.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        perror("Erro ao abrir o arquivo, compile write.c primeiro!");
        return 1;
    }

    char *mensagem = "Olá, mundo, sou o arquivo texto gerado por write para demonstração da função read, para a primeira parte do trabalho 1 de SO!";
    if (write(fd, mensagem, BUFFER_SIZE) == -1) {
        perror("Erro ao escrever no arquivo");
        return 1;
    }

    close(fd);
    return 0;
}
