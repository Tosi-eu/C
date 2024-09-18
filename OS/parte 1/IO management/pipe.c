#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

#define BUFFER_SIZE 256

int main() {
    int pipefd[2];
    pid_t pid;
    char buffer[BUFFER_SIZE];
    char user_input[BUFFER_SIZE];
    
    printf("Digite uma mensagem para enviar: ");
    fgets(user_input, BUFFER_SIZE, stdin);
    user_input[strcspn(user_input, "\n")] = '\0';

    if (pipe(pipefd) == -1) {
        perror("Erro ao criar pipe");
        return 1;
    }

    pid = fork();
    if (pid == -1) {
        perror("Erro ao criar processo");
        return 1;
    }

    if (pid == 0) {
        close(pipefd[1]); 

        ssize_t bytes_read = read(pipefd[0], buffer, BUFFER_SIZE - 1);
        if (bytes_read == -1) {
            perror("Erro ao ler do pipe");
            return 1;
        }

        buffer[bytes_read] = '\0';
        printf("Processo filho leu: %s\n", buffer);
        close(pipefd[0]);
    } else {
        close(pipefd[0]); 

        if (write(pipefd[1], user_input, strlen(user_input)) == -1) {
            perror("Erro ao escrever no pipe");
            return 1;
        }

        close(pipefd[1]);
    }

    return 0;
}
