#include <stdio.h>

/*

program counts how many years ze wil be taller than chico

*/

int main(){

  double ze_height = 1.10, chico_height = 1.50;
  int years = 0;

  while(ze_height <= chico_height){

      ze_height += 0.03;
      chico_height += 0.02;
      years++;

  }

  printf("\nWill be need %d years\n", years);

  return 0;
}
