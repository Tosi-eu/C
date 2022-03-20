#include <stdio.h>
#include <stdlib.h>

int main() {
    int alt, larg, i, x = 0, k = 1;
    scanf("%d", &alt);
    scanf("%d", &larg);
    printf("+");

    for (i = 1; i <= larg; i++) {
        printf("-");
        if (i == (larg-2))
            break;
    }
    printf("+");
    printf("\n");
    while (k <= (alt/2)) {
        printf("|");
        for (x = 1; x <= larg; x++) {
            printf(" ");
            if (x == (larg-2))
                break;
        }
        printf("|");
        printf("\n");
        k++;
    }
    printf("+");
    for (i = 1; i <= larg; i++) {
        printf("-");
        if (i == (larg-2))
            break;
    }
    printf("+");
    printf("\n\n\n");
    system ("pause");
    return 0;
}
