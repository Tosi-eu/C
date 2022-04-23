#include <stdio.h>
#include <string.h>

/*
  int str[20], str_inverted[20];

    gets(str);

    strcpy(str_inverted, str);
    strrev(str_inverted);

   if(strcmp(str_inverted, str) == 0){
     printf("%s is palidrom, and he is %s!", str, str_inverted);
   }else
        printf("He is not palindrom!");

*/


int main(){

    char str[30], inverted[30];
    int i, size, index, equal = 0;

    gets(str);

    index = strlen(str);

    for(i = 0; i < strlen(str); i++){
        inverted[i] = str[index - 1];
        index--;
    }

    inverted[i] = '\0';
    size = strlen(str);

    printf("Original: %s\nInverted: %s\n", str, inverted);

    if(strcmp(str, inverted) == 0){
        printf("\nYes, they are...\n");
    }else
        printf("\nNo, they are not...\n");

    return 0;
}
