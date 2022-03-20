#include <stdio.h>

int main(){

    float Veta[2];
    float Vetb[2];
    float Vetc[2];

    printf(" Value of the vectors: ");
    printf("\n");

    scanf("%f %f", &Veta[0], &Veta[1]);
    scanf("%f %f", &Vetb[0], &Vetb[1]);

    Vetc[0] = (Vetb[0] - Veta[0])*30;
    Vetc[1] = (Vetb[1] - Veta[1])*0.5;

    float degree = Vetc[0]+ Vetc[1];

    if(degree < 0)
        degree = degree * -1;

    if(degree > 180)
        degree = 360 - degree;
    printf("%f", degree);

return 0;
}
