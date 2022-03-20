#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    FILE *f = fopen("arquivo2.txt", "r");
    char search[100];
    char line[1000];
    int done = 0;
    int i, count = 0;


     fgets(search, 100, stdin);

     search[strlen(search) -1] = 0;

     for(i = 0; i < 100; i++){
      fgets(line, 1000, f);
                count++;

    if(strstr(line, search) != NULL){
            done = 1;        }
        }while(!feof(f));

        if(done == 0){
        printf("Nao foi encontrada a string");
        }

    printf("%d", count);

         return 0;

}
