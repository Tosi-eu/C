#include <stdio.h>

int MMC(int x, int y, int z)
{
int  mmc, maior;


if(x >= y && x >= z)
        maior = x;
else if(y >= x && x >= z)
        maior = y;
else if(z >= x && z >= y)
        maior = z;

for(int i = x*y*z; i >= maior; i--){
        if((i % x == 0) && (i % y == 0) && (i % z == 0))
            mmc = i;}


return mmc;
}

int MDC(int x, int y, int z){

int mdc, menor;

if(x <= y && x <= z)
       menor = x;
else if(y <= x && y <= z)
        menor = y;
else if(z <= x && z <= y)
        menor = z;

for(int i = 1; i <= menor; i++){
        if((x % i == 0) && (y % i == 0) && (z % i == 0))
            mdc = i;}

return mdc;
}
int main()
{

int n1, n2, n3, res1, res2;
scanf("%d %d %d", &n1, &n2, &n3);
res1 = MMC(n1,n2,n3);
res2 = MDC(n1,n2,n3);
printf("%d %d", res1, res2);

    return 0;
}
