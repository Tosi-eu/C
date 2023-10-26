#include <stdio.h>

int main(){

  int hours_start, minutes_start, hours_end, minutes_end, hours_total, minutes_total;
  
  //Inputs
    printf("\nStart[Insert hours, after minutes]: \n");
    scanf("%d %d", &hours_start, &minutes_start);

    printf("\nEnd[Insert hours, after minutes]: \n");
    scanf("%d %d", &hours_end, &minutes_end);
//
    hours_total = hours_end - hours_start; // diference between hours

     if(hours_total < 0){
        hours_total += 24;
    }else if(hours_end == hours_start){
      hours_total = 24;
    }

  minutes_total = minutes_end - minutes_start; //diference between minutes

     if(minutes_total < 0){
        minutes_total += 60;
        hours_total--;
    }else if(minutes_end == minutes_start){
      minutes_total *= -1;
      hours_total--;
    }

    printf("%d hours and %d minutes", hours_total, minutes_total);

  return 0;
}
