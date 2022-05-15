#include <stdio.h>
#include <math.h>

struct point{

    int x, y;

};

struct Rectangle{

    // p1 = ponto superior esquerdo
    // p2 = ponto inferior direito
  
    struct point p1, p2;

};

int main(){

    struct Rectangle ret;
    int area, diag, perimeter;

    printf("Right and Left points: ");
    scanf("%d %d %d %d", &ret.p1.x, &ret.p1.y, &ret.p2.x, &ret.p2.y);
    
    area = (ret.p1.y - ret.p2.y) * (ret.p2.x - ret.p1.x);

    if(area < 0){
      area *= -1;
    }

    diag = sqrt((pow(ret.p2.x - ret.p1.x, 2) + pow(ret.p2.y - ret.p1.y, 2)));

    perimeter = ((ret.p1.y - ret.p2.y) + (ret.p2.x - ret.p1.x)) * 2;

    printf("Area: %d\nDiag size: %d\nPerimeter: %d\n", area, diag, perimeter);

    return 0;
}
