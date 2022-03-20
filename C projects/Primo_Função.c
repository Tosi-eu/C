#include <stdio.h>
#include <math.h>

int primo(int a){

    if(a == 0 || a == 1)
        return 0;
    else{
        int i, fim = sqrt(a);
        for(i = 2; i <= fim; i++){
            if(a % i == 0)
                return 0;
        }
        return 1;
    }
}

int main()
{

unsigned int i = 0, n = 0;

scanf("%d", &n);
for(i = 0; i <= n; i++){
    if(primo(i) == 1)
        printf("%d ", i);
}

return 0;
}
