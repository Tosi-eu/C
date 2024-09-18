#include <unistd.h>
#include <stdio.h>

int main() {
    void *initial_brk = sbrk(0); 
    printf("Endereço inicial: %p\n", initial_brk);

    if (brk(initial_brk + 4096) == -1) {
        perror("Erro ao expandir o heap");
        return 1;
    }

    void *new_brk = sbrk(0);
    printf("Novo endereço de brk: %p\n", new_brk);

    return 0;
}
