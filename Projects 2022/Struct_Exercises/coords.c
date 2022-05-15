#include <stdio.h>
#include <math.h>

struct coords{

  float x, y;
  float origin[2];

};

int main(){

  struct coords cd;
  int distance;

  
  printf("Initial coords: \n");
  scanf("%d %d", &cd.origin[0], &cd.origin[1]);

  printf("Coords X and Y: \n");
  scanf("%f %f", &cd.x, &cd.y);

  printf("\nInitial Coords = (%.0f, %.0f)\nFinal Coords: (%.0f, %.0f)\n\n", cd.origin[0], cd.origin[1], cd.x, cd.y);

  distance = sqrt(pow((cd.x - cd.origin[0]), 2) + pow((cd.y - cd.origin[1]), 2));
  printf("Distance beetween x and y: %d\n", distance);

  return 0;
}
