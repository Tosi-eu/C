#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/wait.h>

int main() {
    int sv[2];
    if (socketpair(AF_UNIX, SOCK_STREAM, 0, sv) == -1) {
        perror("Erro ao criar o socket pair");
        return 1;
    }

    if (fork() == 0) {
        close(sv[0]);
        
        char msg[128];
        printf("Digite uma mensagem para enviar ao pai: ");
        fgets(msg, sizeof(msg), stdin);
        msg[strcspn(msg, "\n")] = '\0';
        
        write(sv[1], msg, strlen(msg) + 1);
        close(sv[1]); 
        exit(0);
    } else {
        close(sv[1]);
        
        char buffer[128];
        ssize_t bytesRead = read(sv[0], buffer, sizeof(buffer));
        if (bytesRead > 0) {
            buffer[bytesRead] = '\0';
            printf("Pai recebeu: %s\n", buffer);
        } else {
            perror("Erro ao ler a mensagem");
        }
        close(sv[0]);
        wait(NULL);
    }

    return 0;
}
