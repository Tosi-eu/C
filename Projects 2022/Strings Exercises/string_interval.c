#include <stdio.h>
#include <stdlib.h>

int main(){

  int i, j;
  char *word;

  word = (char *)malloc(sizeof(char));

  setbuf(stdin, NULL);
  gets(word);

  scanf("%d %d", &i, &j);
  while((i < 0)  && (j < 0)){
    printf("Invalid, please type again...\n");
    scanf("%d %d", &i, &j);
  }

  for(int k = i; k < j; k++){
    printf("%c", word[k]);
  }

  free(word);
  return 0;
}
