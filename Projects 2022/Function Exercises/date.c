#include <stdio.h>
#include <string.h>

int date(int day, int month, int year);

int main(){

  int day, month, year;

  scanf("%d %d %d", &day, &month, &year);

  date(day, month, year);

  return 0;
}

int date(int day, int month, int year){

      if(month == 1){
        printf("%d de janeiro de %d", day, year);
      }else if(month == 2){
        printf("%d de fevereiro de %d", day, year);
      }else if(month == 3){
        printf("%d de março de %d", day, year);
      }else if(month == 4){
        printf("%d de abril de %d", day, year);
      }else if(month == 5){
        printf("%d de maio de %d", day, year);
      }else if(month == 6){
        printf("%d de junho de %d", day, year);
      }else if(month == 7){
        printf("%d de julho de %d", day, year);
      }else if(month == 8){
        printf("%d de agosto de %d", day, year);
      }else if(month == 9){
        printf("%d de setembro de %d", day, year);
      }else if(month == 10){
        printf("%d de outubro de %d", day, year);
      }else if(month == 11){
        printf("%d de novembro de %d", day, year);
      }else if(month == 12){
        printf("%d de dezembro de %d", day, year);
      }else
          printf("Invalid date;");
}
