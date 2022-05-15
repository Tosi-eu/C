#include <stdio.h>

struct point{

    int x, y;

};

struct rectangle{

    // p1 = left
    // p2 = right
    struct point p1, p2;

};

int main(){

    struct rectangle ret;
    struct point p;

    printf("Right and left points: ");
    scanf("%d %d %d %d", &ret.p1.x, &ret.p1.y, &ret.p2.x, &ret.p2.y);
    
    printf("Coordenates: ");
    scanf("%d %d", &p.x, &p.y);
    
    if(p.x < ret.p1.x || p.x > ret.p2.x)
        printf("Point is outside of the rectangle...\n");
    else if(p.y < ret.p2.y || p.y > ret.p1.y)
        printf("Point is outside of the rectangle...\n");
    else
        printf("Point is inside the rectangle...\n");

    return 0;
}
