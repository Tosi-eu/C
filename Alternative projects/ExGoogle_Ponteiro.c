#include <stdio.h>
#include <stdlib.h>

int main(){

 int n1, n2, n3;
 int *pN;
 float d1, d2, d3;
 float *pD;
 char l1, l2, l3;\
 char *pL;

// lendo os dados necessarios

 printf("Digite os valores inteiros: \n");
 printf("");
 scanf("%d", &n1);
 scanf("%d", &n2);
 scanf("%d", &n3);

printf("");

 printf("Agora digite os valores decimais: \n");
 printf("");
 scanf("%f", &d1);
 scanf("%f", &d2);
 scanf("%f", &d3);

 printf("Por fim digite as letras: \n");
 printf("");
 scanf(" %c", &l1);
 scanf(" %c", &l2);
 scanf(" %c", &l3);

 printf("\n");

 printf("Os numeros informados foram: \n");
 printf("Inteiros: %d, %d e %d \n", n1, n2, n3);
 printf("Decimais: %.2f, %.2f e %.2f \n", d1, d2, d3);
 printf("Letras: %c, %c e %c \n", l1, l2, l3);
 printf("\n");

pN = &n1;{
 *pN = 2014;
  pN = &n2;
 *pN = 2014;
  pN = &n3;
 *pN = 2014;
 }

pD = &d1;{
 *pD = 9.99;
  pD = &d2;
 *pD = 9.99;
  pD = &d3;
 *pD = 9.99;
 }

pL = &l1;{
*pL = 'Y';
pL = &l2;
*pL = 'Y';
pL = &l3;
*pL = 'Y';
}

 printf("\n");
 printf("numeros inteiros modificados: %d  %d  %d\n", n1,n2,n3);

 printf("numeros decimais modificados: %.2f  %.2f  %.2f\n", d1,d2,d3);

 printf("letras modificadas: %c  %c  %c\n", l1,l2,l3);


system("pause");
return 0;
}
