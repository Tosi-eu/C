#include <stdio.h>

int main(){

  int vet[6];
  int *p;

p = &vet[0]; //pointer points to array's index 0

  for(int i = 0; i < 6; i++){
    scanf("%d", p);
    p++;
  }

p = &vet[0]; //pointer points to array's index 0, again

  for(int i = 0; i < 6; i++){
    printf("%d ", *(p + i));
  }

  return 0;
}