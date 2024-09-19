#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define BUFFER_SIZE 1024
#define WORD_LENGTH 6

void generate_random_word(char *word, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < length; ++i) {
        word[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    word[length] = '\0';
}

int main() {
    FILE *file;
    char word[WORD_LENGTH + 1]; 
    srand(time(NULL));

    file = fopen("tempfile.txt", "a+"); 
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    while (1) {
        generate_random_word(word, WORD_LENGTH); 
        fprintf(file, "%s\n", word); 
        fflush(file);

        printf("%s\n", word); 
        usleep(1000);
    }

    fclose(file);
    return 0;
}
