#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  
    char *word, Mychar;
    int i, size, vogals = 0;

    word = (char *)malloc(sizeof(char));

    gets(word);

    for(i = 0; word[i] != '\0'; i++){
        size++;
        // aproveito e ja vejo se a string tem vogais
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i'
            || word[i] == 'o' || word[i] == 'u')
            vogals++;
    }
    size--; //after all, remove '\n'

    scanf("%c", &Mychar);

    // aqui eu substituo as vogais pelo caractere lido
    for(i = 0; i < size; i++){
        if(word[i] == 'a'){
          word[i] = Mychar;
        }else if(word[i] == 'e'){
                word[i] = Mychar;
        }else if( word[i] == 'i'){
                word[i] = Mychar;
        }else if(word[i] == 'o'){
                word[i] = Mychar;
        }else
            word[i] == 'u';  
    }

    printf("\nVogals amount: %d\nWord modified: %s", word, vogals);    

    free(word);
    return 0;
}
