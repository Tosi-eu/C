#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

  float vetA[20], vetB[20];
  
  srand(time(NULL));

  for(int i = 0; i < 20; i++){
      vetA[i] = rand() % 10;
  }

  for(int i = 0; i < 20; i++){
      vetB[i] = vetA[i] * vetA[i];
  }

  for(int i = 0; i < 20; i++){
    printf("%.0f ", vetA[i]);
  }

  printf("\n");

   for(int i = 0; i < 20; i++){
    printf("%.0f ", vetB[i]);
  }

  return 0;
}