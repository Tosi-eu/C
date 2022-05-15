#include <stdio.h>
#include <stdlib.h>

int main(){

    char *word1, *word2;

    word1 = (char *)malloc(sizeof(char));
    word2 = (char *)malloc(sizeof(char));

    setbuf(stdin, NULL);
    gets(word1);
    gets(word2);
    
    for(int i = 0; word1[i] != '\0'; i++){
        if(word1[i] < word2[i]){
            printf("-> %s\n -> %s", word1, word2);
            break;
        }
        else if(word1[i] > word2[i]){
            printf("-> %s\n -> %s", word2, word1);
            break;
        }
    }

    free(word1);
    free(word2);
    return 0;
}
