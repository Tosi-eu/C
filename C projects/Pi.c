#include <stdio.h>
#include <stdlib.h>

int main() {

  double pi,soma;
  int i,j;

  scanf("%d", &j);

  soma = 0;
  for (i = 0; i < j; i++) {

    if (i % 2 == 0) {
      soma = soma + 1.0/(2*i + 1);
    }
    else {
      soma = soma - 1.0/(2*i + 1);
    }
  }

  pi = 4*soma;
  printf("%0.6f\n", pi);

  return 0;
  system("Pause");
}
