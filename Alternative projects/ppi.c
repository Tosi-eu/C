#include <stdio.h>
#include <stdlib.h>

int *soma(int *x1, int *x2, int *sum, int n){
int i;

sum = (int *) malloc(n * sizeof(int));

if(sum == NULL){
printf("Memoria insuficiente\n");
exit(1);
}
for(i = 0; i < n; i++){
sum[i] = x1[i] + x2[i];
}
return sum;
}

int main(){

int i, n;

printf("Digite o valor de n: \n");

scanf("%d", &n);

int x1[n], x2[n];

for(i = 0; i < n; i++){
scanf("%d", &x1[i]);
}

for(i = 0; i < n; i++){
scanf("%d", &x2[i]);
}

int *x3 = soma(x1,x2,x3,n);

for(i = 0; i < n; i++){
printf("%d ", x3[i]);
}

free(x3);
return 0;
}
