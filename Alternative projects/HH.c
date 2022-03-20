#include <stdio.h>
#include <stdlib.h>
#define TAM 20

void divisores(int n, int v[], int *i);

int main() {

    int v[TAM], i, n, x;

    scanf("%d", &n);

    divisores(n, v, &i);

    for (x = i- 1; x >= 0; x--) {
            printf("%d ", v[x]);
    }
    return 0;
}

void divisores(int n, int v[], int *i) {

    int d, x;

    x = 0;

    for (d = 1; d < n; d++) {
        if (n % d == 0) {
            v[x] = d;
                x++;
        if (x == 20)
            break;
        }
    }
    *i = x;
}


