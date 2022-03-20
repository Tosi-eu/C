#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];
    int words = 1;
    fgets(palavra,100,stdin);
    for(int i = 0; i < strlen(palavra);i++)
        //if(strcmp(x[i], ' ') == 0)
    if(palavra[i] == ' ' && palavra[i+1] != ' ')
            words++;
    printf("%d\n", words);
}
