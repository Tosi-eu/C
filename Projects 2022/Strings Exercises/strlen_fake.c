#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

  char *str;
  int count = 0;

  str = (char *)malloc(sizeof(char));
  gets(str);

  for(int i = 0; str[i] != '\0'; i++){
    if(str[i] != '\0'){
      count++;
    }
  }

  printf("%d", count);

  free(str);
  return 0;
}
