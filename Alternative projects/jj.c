#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

FILE *fl = fopen("arquivo2.txt", "r");
char search[100];
char line[1000];
int done = 0;
int i = 0;

fgets(search, 100, stdin);

search[strlen(search) -1] = 0;

do{
    fgets(line, 1000, fl); i++;
    if(strstr(line, search) != NULL){
     printf("Linha %d: %s", i, line);
     done = 1;
     }
     }while(!feof(fl));
      if(done == 0)
        printf("Nao foi encontrada a string");

        return 0;}
