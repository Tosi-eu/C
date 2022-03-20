#include <stdio.h>
#include <math.h>

int numero(int n){

    int sum = 0, i, primo = 2;

     if(n == 0 || n == 1)
        return 0;
    else{

        for(i = 2; i <= sqrt(n); i++){
            i = primo;
        }
    }

    for (i = 2; i < n; i++){
        if(n/i== 0){
            sum++;
        }
    }
    return primo;
}

int main(){

    int n;

    scanf("%d", &n);

    int res = numero(n);

    for(int i = 2; i < n; i++){
        printf("%d ", res);
    }

    return 0;
}
