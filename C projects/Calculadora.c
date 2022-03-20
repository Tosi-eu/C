#include <stdio.h>
#include <stdlib.h>

int main()
{

float n1,n2,resultado;
char operador;

scanf ("%f %f",&n1, &n2);

/* + ou - ou * ou / */
scanf ("%s",&operador);

if (operador=='+') {
resultado= (n1+n2);
printf ("\n O resultado e: %.2f\n\n",resultado);
}
else if (operador=='-') {
resultado= (n1-n2);
printf ("\n Resultado: %.2f\n\n",resultado);
}
else if (operador=='/') {
resultado= (n1/n2);
printf ("\n Resultado: %.2f\n\n",resultado);
}
else if (operador=='*') {
resultado= (n1*n2);
printf ("\n Resultado: %.2f\n\n",resultado);
}

system("Pause");
return 0;
}
