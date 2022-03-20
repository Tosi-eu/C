 #include <stdio.h>

void inv(int *a, int*b){
    int A = *a;
    int B = *b;
    *a = B;
    *b = A;
}

int main(){

    int A,B;
    scanf("%d %d", &A, &B);
    inv(&A, &B);
    printf("\nA: %d\nB: %d\n", A,B);

    return 0;
}
