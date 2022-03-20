#include <stdio.h>
#include <string.h>

int main(){
    char palavra[15];
    char palavra2[15];
    char letra;
    gets (palavra);
    letra=getchar();
    int i=0;
    int j=0;

    for(i=0; palavra[i] != '\0'; i++){
       if(palavra[i] != letra){
            palavra2[j] = palavra[i];
            j++;
        }
    }

    printf("%s", palavra2);

}
