#include <stdio.h>

// Line euation: Y = ax + b
// Intercept: b = y - ax
// (x1, p1) and (y1, p2)
 // 2 3 5 7
 
typedef struct{

  float y;
  float x;

}axes;

typedef struct{

  float p1;
  float p2;
  axes line;

}points;

int main(){

  points coord;
  float slope, line_x, line_y;

  scanf("%f %f %f %f", &coord.line.x, &coord.line.y, &coord.p1, &coord.p2);
  
  float dx = coord.p1 - coord.line.x;
  float dy = coord.p2 - coord.line.y;

  slope = dy / dx;
  float intercept = coord.line.y - slope * coord.line.x;

  printf("y = %.2fx + %.2f", slope, intercept);


  return 0;
}
