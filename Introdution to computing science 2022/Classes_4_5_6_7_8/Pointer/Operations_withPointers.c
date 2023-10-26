#include <stdio.h>

int main(){

  int n1, n2;
  int *p1, *p2;
  int sum, sub, mult;
  double div;

  p1 = &n1; //pointer points the adress of n1
  p2 = &n2; //pointer points the adres of n2

  scanf("%d %d", p1, p2);

  sum = *p1 + *p2;
  sub = *p1 - *p2;
  mult = *p1 * *p2;
  div = *p1 / *p2;

  printf("\nSum of %d + %d: %d\nSub of %d - %d: %d\nMult of %d * %d: %d\nDiv of %d / %d: %.2lf\nn1: %d n2: %d\n", *p1, *p2, sum, *p1, *p2, sub, *p1, *p2, mult, *p1, *p2, div, n1, n2);

  return 0;
}
