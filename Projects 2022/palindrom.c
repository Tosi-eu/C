#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

    char str[30], *inverted;
    int i, size, index, equal = 0;

    inverted = (char *)malloc(sizeof(char));

    gets(str);

    index = strlen(str); // index = string size

    for(i = 0; i < index; i++){
        inverted[i] = str[index - 1];
        index--;
    }

    inverted[i] = '\0'; // if dont do that, the strings will be different, but we dont see this in the result
    size = strlen(str);

    printf("Original: %s\nInverted: %s\n", str, inverted);

    if(strcmp(str, inverted) == 0){
        printf("\nYes, they are...\n");
    }else
        printf("\nNo, they are not...\n");

    free(inverted);
    return 0;
}
