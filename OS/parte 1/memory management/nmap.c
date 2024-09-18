#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include <errno.h>

#define ARRAY_SIZE 10

void handle_error(const char *msg) {
    perror(msg);
    exit(EXIT_FAILURE);
}

int main() {
    size_t size = ARRAY_SIZE * sizeof(int);
    
    void *addr = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (addr == MAP_FAILED) {
        handle_error("Erro ao mapear memória");
    }

    printf("Memória mapeada em: %p\n", addr);

    int *array = (int *)addr;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        array[i] = i * i;
    }
    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        sum += array[i];
    }
    printf("Valores armazenados no array:\n");
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("Soma dos valores no array: %d\n", sum);
    
    if (munmap(addr, size) == -1) {
        handle_error("Erro ao desmapear memória");
    }

    return 0;
}
