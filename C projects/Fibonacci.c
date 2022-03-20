#include <stdio.h>
#include <stdlib.h>

int main() {

int num, f1 = 0, f2 = 1, f3;

 scanf("%d", &num);

 if(num < 0) {
 return 1;
 } else {
 printf("0  1");
 while(f2 <= num) {
 f3 = f2 + f1;
 printf("  %d", f3);
 f1 = f2;
 f2 = f3;
 }
 printf("\n");
 return 0;
 }
 }
