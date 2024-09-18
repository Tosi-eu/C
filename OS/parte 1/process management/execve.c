#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>

int main() {
    const char *path = "/bin/ls";

    struct stat statbuf;
    if (stat(path, &statbuf) == -1) {
        perror("Erro ao verificar o arquivo executável");
        return 1;
    }

    char *args[] = { "ls", "-la", NULL };
    char *envp[] = { NULL }; 

    printf("Executando %s com argumentos:", path);
    for (int i = 0; args[i] != NULL; i++) {
        printf(" %s", args[i]);
    }
    printf("\n");

    execve(path, args, envp);

    perror("Erro ao executar execve");
    return 1;
}
