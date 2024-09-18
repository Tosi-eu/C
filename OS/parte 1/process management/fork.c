#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == -1) {
        perror("Erro ao criar o processo");
        return 1;
    } else if (pid == 0) {
        printf("Processo filho (PID: %d) em execução\n", getpid());
        for (int i = 1; i <= 5; i++) {
            printf("Filho: %d\n", i);
            sleep(1);
        }
        printf("Processo filho (PID: %d) finalizado\n", getpid());
    } else {
        printf("Processo pai (PID: %d) aguardando o filho terminar\n", getpid());
        wait(NULL);
        printf("Processo pai (PID: %d) continuando execução\n", getpid());

        for (int i = 1; i <= 3; i++) {
            printf("Pai: %d\n", i);
            sleep(1);
        }
        printf("Processo pai (PID: %d) finalizado\n", getpid());
    }
    return 0;
}
