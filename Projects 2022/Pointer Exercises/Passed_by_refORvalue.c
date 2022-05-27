#include <stdio.h>

int triple(int x);
int triple_pointer(int *x);

int main(){

  int value = 10;

  triple(value);
  
  printf("Value passed by value: %d\n", value);

  triple_pointer(&value);

  printf("Value passed by reference: %d", value);

  return 0;
}

int triple(int x){
  return x *= 3;
}

int triple_pointer(int *x){
  return *x *= 3;
}
