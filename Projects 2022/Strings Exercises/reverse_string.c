#include <stdio.h>
#include <stdlib.h>

int main(){

    char *word;
    int size = 0;

    word = (char *)malloc(sizeof(char));

    setbuf(stdin, NULL);
    gets(word);
    
    for(int i = 0; word[i] != '\0'; i++){
        size++;
    }

    for(int i = (size - 1); i >= 0; i--)
        printf("%c", word[i]);
    printf("\n");

    free(word);
    return 0;
}
