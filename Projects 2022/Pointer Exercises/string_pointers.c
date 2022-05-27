#include <stdio.h>

int verify_chars(char *str, char *str2);

int main(){

    char str[100], str2[50];

    fgets(str, 100, stdin);
    fgets(str2, 50, stdin);

    int result = verify_chars(str, str2);
    if(result == 1)
        printf("The first string contains the second...\n");
    else
        printf("The first string don't contains the second...\n");

    return 0;
}

int verify_chars(char *str, char *str2){
    int aux = 0;
    for(int i = 0, j = 0; (*(str + i)) != '\0'; i++){
        // while the position of the strings are equal
        while( (*(str + i)) == (*(str2 + j)) ){
            i++;
            j++;
            // if index > strlen(str2), or simply break
            if( (*(str2 + j)) == '\n' || (*(str2 + j)) == '\0')
                return 1;
            // if indexes of them are different, so aux = 0 and return
            else if( (*(str + i)) != (*(str2 + j)) )
                aux = 0;
        }
    }
    return aux;
}
