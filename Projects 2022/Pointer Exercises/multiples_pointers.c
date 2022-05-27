#include <stdio.h>
#include <math.h>

/*
  b = double of a
  c = triple of a
  d = quadruple of a
  */

int main(){

  int a, *b, **c, ***d;

  scanf("%d", &a);

   b = &a;
  *b = pow((*b), 2);
   printf("%d\n", *b);
   *b = (*b) / 2;

   c = &b;
  **c = pow((**c), 3);
   printf("%d\n", **c);
   **c = (**c) / 3;

   d = &c;
  ***d = pow((***d), 4);
   printf("%d\n", ***d);

  return 0;
}