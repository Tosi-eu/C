#include <stdio.h>

int main(){

    char palavra[50];

    setbuf(stdin, NULL);
    fgets(palavra, 50, stdin);

    for(int i = 0; palavra[i] != '\0'; i++){
        // if space or break line, increment i
        if(palavra[i] == ' ' || palavra[i] == '\n')
            continue;
        else
            // upper 
            palavra[i] -= 32;
    }
    
    printf("%s\n", palavra);

    return 0;
}
