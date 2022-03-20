#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, n2, n3;
    int i = 2;
    int mmc = 1;

scanf("%d %d %d",&n, &n2, &n3);


while(n>1 || n2 > 1 || n3 >1){
    int m1 = n % i;
    int m2 = n2 % i;
    int m3 = n3 % i;

    if(m1 == 0){n /= i;}
    if(m2 == 0){n2 /= i;}
    if(m3 == 0){n3 /= i;}

    if(m1 && m2 && m3){
        i += 1;
    }else{
        mmc *= i;
    }
    }

printf("%d", mmc);
return 0;
system("pause");
}
