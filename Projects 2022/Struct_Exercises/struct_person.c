#include <stdio.h>
#include <stdlib.h>

struct person{

  char *name;
  int age;
  char adress[30];

};

int main(){

  struct person p;

  p.name = (char *)malloc(sizeof(char));

  gets(p.name);
  scanf("%d", &p.age);
  setbuf(stdin, NULL);
  fgets(p.adress, 30, stdin);

  printf("-----------------\n");
  printf("-> %s\n", p.name);
  printf("-> %d\n", p.age);
  printf("-> %s\n", p.adress);
  printf("-----------------");

  free(p.name);
  return 0;
}
