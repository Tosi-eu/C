#include <stdio.h>
#include <stdlib.h>

int Stringlen(char *word);
char *invertString(char *word);

int main(){

    char word[50], *StringPointer;

    fgets(word, 50, stdin);

    StringPointer = invertString(word);
    printf("%s", StringPointer);

    free(StringPointer);
    StringPointer = NULL;

    return 0;
}

int Stringlen(char *word){
    int count = 0;

    for(int i = 0; word[i] != '\0'; i++){
        count++;
    }

    return count;
}

char *invertString(char *word){

    char *str;
    int sizeS, i, j;

    sizeS = Stringlen(word);
    str = (char*) malloc((sizeS) * sizeof(char));

    if(str == NULL){
        printf("Nao foi possivel alocar memoria\n");
        exit(1);
    }
    for(i = 0, j = sizeS - 1; i < sizeS; i++, j--){
        str[i] = word[j];
    }
    str[i] = '\0';

    return str;
}
