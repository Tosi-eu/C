#include <stdio.h>

//--------------Lógica do MDC-----------------//
int Fmdc(int a, int b, int c)
int Fmmc(int a, int b, int c)
{
    while(c != 0){
        int r = a % b;
        a = b;
        b = c;
        c = r;
    }
    return c;

int menor, maior, i, x, y, z, mmc;


    if(x <= y && x <= z){
       menor = x;}
else if(y <= x && y <= z){
        menor = y;}
else if(z <= x && z <= y){
        menor = z;}
                                        //  -> Estabeleça quando os valores serão os menores  <- //
if(x >= y && x >= z)
        maior = x;
else if(y >= x && y >= z)
        maior = y;
else if(z >= x && z >= y)
        maior = z;

for(int i = x*y*z; i >= maior; i--)
        if((i % x == 0) && (i % y == 0) && (i % z == 0))  // --> Lógica do MDC
            mmc = i;
            return x;
}

//-------------------Testes-------------------//
int main() {

 int x1, x2, x3, mdc, mmc;

 scanf("%d %d %d", &x1, &x2, &x3);

 mdc = Fmdc(x1,x2,x3);
 mmc = Fmmc(x1, x2, x3);

 printf("%d %d", mdc, mmc);

    return 0;

}
int mmc(int a, int b, int c){
    return b * (c / Fmdc(a,b, c));
}
