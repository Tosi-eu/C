#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *word, *codified;
    int swap;

    word = (char *)malloc(sizeof(char));
    codified = (char *)malloc(sizeof(char));

    setbuf(stdin, NULL);
    gets(word);

    printf("Key for swapping: ");
    scanf("%d", &swap);

    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] == ' ' || word[i] == '\n'){
            codified[i] = word[i];
        }else
            codified[i] = word[i] + swap; // traverse the ASCII table and swap the correspondent chars
    }

    printf("%s", codified);

    free(word);
    free(codified);
    return 0;
}
