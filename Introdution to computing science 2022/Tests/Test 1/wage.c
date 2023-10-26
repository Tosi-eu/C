#include <stdio.h>

/*
  WAGE READJUSTMENT PROGRAM

  25% for wage < 500, with no addittional
  20% for wage <= 1000, with no addittional if time worked < 1 or > 3, else have an addittional of 100
  15% for wage <=  1500, with no addittional if time worked < 4 or > 6, else have an addittional of 200
  25% for wage < 500, with no addittional if time worked < 7 or > 10, else have an addittional of 300
  0% for wage > 2000, with no addittional if time worked < 10, else have an addittional of 500

*/

int main(){

  double wage, time;

  // person wage
  scanf("%lf", &wage);

  //how long time he works
  scanf("%lf", &time);

  if(wage <= 500.00){
    wage += (wage*0.25);
  }else 
      if((wage > 500.00 && wage <= 1000.00) && (time >= 1 && time <= 3)){
        wage += (wage * 0.20) + 100; 
      }else
          if((wage > 500.00 && wage <= 1000.00) && (time < 1 || time > 3)){
            wage += (wage * 0.20);
          }else
              if((wage > 1000.00 && wage <= 1500.00) && (time >= 4.0 && time <= 6.0)){
                wage += (wage * 0.15) + 200;
              }else 
                  if((wage > 1000.0 && wage <= 1500.0) && (time < 4.0 || time > 6.00)){
                    wage += (wage * 0.15);
                  }else 
                      if((wage > 1500.00 && wage <= 2000.00) && (time >= 7.0 && time <= 10.0)){
                        wage += (wage * 0.1) + 300;
                      }else
                          if((wage > 1500.00 && wage <= 2000.00) && (time < 7.0 || time > 10.0)){
                            wage += (wage * 0.1);
                          }else
                              if((wage > 2000.00) && (time <= 10)){
                                wage += 0;
                              }else
                                  if((wage > 2000.00) && (time > 10)){
                                    wage += 500;
                                  }

 printf("%.2lf", wage);

  return 0;
}
