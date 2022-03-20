#include <stdio.h>

// A = Largura, B = comprimento, C = Largura - > container//
// X = Largura, Y = comprimento, Z = Largura - > navio//

int main(){

float A, B, C, X, Y, Z;
int count = 0, count2 = 0, count3 = 0;


scanf("%f %f %f", &X, &Y, &Z);
scanf("%f %f %f", &A, &B, &C);
float base1 = A, base2 = B, base3 = C;

while(A <= X){
    A += base1;
    count++;
}

while(B <= Y){
    B += base2;
    count2++;
}

while(C <= Z){
    C += base3;
    count3++;
}

printf("%d", count*count2*count3);
return 0;
}
