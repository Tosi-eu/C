#include <stdio.h>

/*

  banking box simulator
  money bills available: 10, 20, 50

*/

int main(){

  int amount, count10 = 0, count20 = 0, count50 = 0;

  //how much money do you want?
  scanf("%d", &amount);

  while(amount > 0){

    if(amount % 50 == 0){
      count50++;
      amount -= 50;
    }else if(amount % 20 == 0){
      count20++;
      amount -= 20;
      }else{
        count10++;
        amount -= 10;
      }
  }

printf("%d %d %d", count50, count20, count10);

  return 0;
}