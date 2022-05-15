#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  int size, i, j;
  char *word, aux;

  word = (char *)malloc(sizeof(char));

  gets(word); // gets is different of fgets, fgets stores \n t the end of the string

  for(i = 0, j = strlen(word); i < j; i++, j--){
      aux = word[i];
      word[i] = word[strlen(word) - i - 1];
      word[strlen(word) - i - 1] = aux;
    }

   printf("%s", word);

  free(word);
  return 0;
}
