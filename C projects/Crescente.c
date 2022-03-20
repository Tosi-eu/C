#include <stdlib.h>
#include <stdio.h>

int main(){

int A, B, C;

printf("Digite valores de A, B e C: \n\n");
scanf("%d", &A);
scanf("%d", &B);
scanf("%d", &C);

 if (A > B)                                // a>b
      if (B > C)
        printf("%4d%4d%4d\n", A, B, C);       // a>b>c
      else                                    // a>b,c>=b
        if (A > C)
          printf("%4d%4d%4d\n", B, C, A);     // a>c>=b
        else
          printf("%4d%4d%4d\n", B, A, C);     // c>=a>b
    else                                      // b>=a
      if (B > C)                              // b>=a,b>c
        if (A > C)
          printf("%4d%4d%4d\n", C, A, B);     // b>=a>c
        else
          printf("%4d%4d%4d\n", A, C, B);     // b>c>=a
      else
        printf("%4d%4d%4d\n", A ,B, C);       // c>=b>=a

system("Pause");
return 0;
}
