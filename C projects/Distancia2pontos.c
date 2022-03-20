#include <stdio.h>
#include <math.h>

//-distância entre 2 pontos = sqrt((x2-x1)^2 + (y2-y1)^2)-//

//--------------------------------------------------------//
float Distancia(int x1, int x2, int y1, int y2) {
    return sqrt( pow(x2-x1,2) + pow(y2-y1,2) );
}

int main() {
    int x2,x1,y2,y1;
    float distancia;

    scanf("%d %d %d %d", &x2, &x1, &y2, &y1);

    distancia = Distancia(x1,y1,x2,y2);

    printf("%f", distancia);

    return 0;
}
//---------------------------------------------------------//
